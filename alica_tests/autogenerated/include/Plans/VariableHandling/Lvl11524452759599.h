#ifndef Lvl1_H_
#define Lvl1_H_

#include "DomainCondition.h"
#include "engine/BasicUtilityFunction.h"
#include "engine/DefaultUtilityFunction.h"
#include "engine/UtilityFunction.h"
/*PROTECTED REGION ID(incl1524452759599) ENABLED START*/
// Add inlcudes here
extern bool vhStartCondition;
/*PROTECTED REGION END*/
using namespace alica;

namespace alicaAutogenerated
{
/*PROTECTED REGION ID(meth1524452759599) ENABLED START*/
// Add other things here

/*PROTECTED REGION END*/
class UtilityFunction1524452759599 : public BasicUtilityFunction
{
    shared_ptr<UtilityFunction> getUtilityFunction(Plan* plan);
};

class RunTimeCondition1524453470580 : public DomainCondition
{
    bool evaluate(shared_ptr<RunningPlan> rp);
};

class TransitionCondition1524453491764 : public DomainCondition
{
    bool evaluate(shared_ptr<RunningPlan> rp);
};

} // namespace alicaAutogenerated

#endif
