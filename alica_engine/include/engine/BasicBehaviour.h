#pragma once

#include "supplementary/AgentID.h"
#include "engine/model/BehaviourConfiguration.h"
#include "engine/Types.h"
#include <string>
#include <memory>
#include <thread>
#include <chrono>
#include <condition_variable>
#include <vector>

namespace supplementary {
class Timer;
class ITrigger;
}  // namespace supplementary

namespace alica {
class Variable;
class RunningPlan;

class EntryPoint;
class AlicaEngine;

/**
 * The base class for all behaviours. All Behaviours must inherit from this class.
 */
class BasicBehaviour {
public:
    BasicBehaviour(const std::string& name);
    virtual ~BasicBehaviour();
    virtual void run(void* msg) = 0;
    const std::string& getName() const;
    const BehaviourParameterMap& getParameters() const { return _configuration->getParameters(); }

    void setName(const std::string& name);
    void setConfiguration(const BehaviourConfiguration* beh);

    const VariableGrp& getVariables() { return _configuration->getVariables(); }
    const Variable* getVariableByName(const std::string& name) const;

    bool stop();
    bool start();
    int getDelayedStart() const;
    void setDelayedStart(long msDelayedStart);
    int getInterval() const;
    void setInterval(long msInterval);
    std::shared_ptr<RunningPlan> getRunningPlan() const;
    void setRunningPlan(std::shared_ptr<RunningPlan> runningPlan);
    bool isSuccess() const;
    void setSuccess(bool success);
    void setEngine(AlicaEngine* engine);
    bool isFailure() const;
    void setFailure(bool failure);

    bool getParameter(const std::string& key, std::string& valueOut) const;
    void setTrigger(supplementary::ITrigger* trigger);

    void sendLogMessage(int level, std::string& message);

    virtual void init(){

    };

protected:
    /**
     * The name of this behaviour.
     */
    std::string name;

    const BehaviourConfiguration* _configuration;

    /**
     * The running plan representing this behaviour within the PlanBase.
     */
    std::shared_ptr<RunningPlan> runningPlan;
    std::chrono::milliseconds msInterval;
    std::chrono::milliseconds msDelayedStart;
    /**
     * is always true except when the behaviour is shutting down
     */
    bool started;
    bool callInit;

    /**
     * Tells us whether the behaviour is currently running (or active)
     */
    bool running;

    std::thread* runThread;      /** < executes the runInternal and thereby the abstract run method */
    supplementary::Timer* timer; /** < triggers the condition_variable of the runThread, if this behaviour is timer
                                    triggered, alternative to behaviourTrigger*/
    supplementary::ITrigger* behaviourTrigger; /** triggers the condition_variable of the runThread, if this behaviour
                                                  is event triggered, alternative to timer */
    std::condition_variable runCV;
    const supplementary::AgentID* getOwnId() const;

    /**
     * Called whenever a basic behaviour is started, i.e., when the corresponding state is entered.
     * Override for behaviour specific initialisation.
     */
    virtual void initialiseParameters(){};

    const EntryPoint* getParentEntryPoint(const std::string& taskName);

    const EntryPoint* getHigherEntryPoint(const std::string& planName, const std::string& taskName);

    // TODO: these methods may have race conditions, check and refactor
    const AgentGrp* robotsInEntryPointOfHigherPlan(const EntryPoint* ep);

    const AgentGrp* robotsInEntryPoint(const EntryPoint* ep);
    AlicaEngine* engine;

private:
    void runInternal();
    void initInternal();

    std::mutex runCV_mtx;
    /**
     * The Success flag. Raised by a behaviour to indicate it reached whatever it meant to reach.
     */
    bool success;
    /**
     * The Failure flag. Raised by a behaviour to indicate it has failed in some way.
     */
    bool failure;
};
} /* namespace alica */
