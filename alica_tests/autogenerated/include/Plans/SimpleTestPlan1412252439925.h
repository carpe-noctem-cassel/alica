#ifndef SimpleTestPlan_H_
#define SimpleTestPlan_H_

#include "DomainCondition.h"
#include "engine/BasicUtilityFunction.h"
#include "engine/DefaultUtilityFunction.h"
#include "engine/UtilityFunction.h"
/*PROTECTED REGION ID(incl1412252439925) ENABLED START*/
// Add inlcudes here
/*PROTECTED REGION END*/
using namespace alica;

namespace alicaAutogenerated
{
/*PROTECTED REGION ID(meth1412252439925) ENABLED START*/
// Add other things here
/*PROTECTED REGION END*/
class UtilityFunction1412252439925 : public BasicUtilityFunction
{
    shared_ptr<UtilityFunction> getUtilityFunction(Plan* plan);
};

class RunTimeCondition1412781693884 : public DomainCondition
{
    bool evaluate(shared_ptr<RunningPlan> rp);
};

class PreCondition1412781707952 : public DomainCondition
{
    bool evaluate(shared_ptr<RunningPlan> rp);
};

class TransitionCondition1412761926856 : public DomainCondition
{
    bool evaluate(shared_ptr<RunningPlan> rp);
};

} // namespace alicaAutogenerated

#endif
