#include "Plans/MasterPlanTestConditionPlanType1418042656594.h"
using namespace alica;
/*PROTECTED REGION ID(eph1418042656594) ENABLED START*/ // Add additional using directives here
/*PROTECTED REGION END*/
namespace alicaAutogenerated
{
// Plan:MasterPlanTestConditionPlanType

/* generated comment

 Task: DefaultTask  -> EntryPoint-ID: 1418042656596

 */
shared_ptr<UtilityFunction> UtilityFunction1418042656594::getUtilityFunction(Plan* plan)
{
    /*PROTECTED REGION ID(1418042656594) ENABLED START*/

    shared_ptr<UtilityFunction> defaultFunction = make_shared<DefaultUtilityFunction>(plan);
    return defaultFunction;

    /*PROTECTED REGION END*/
}

// State: Start in Plan: MasterPlanTestConditionPlanType

/*
 *
 * Transition:
 *   - Name: MISSING_NAME, ConditionString: , Comment :
 *
 * Plans in State:
 *
 * Tasks:
 *   - DefaultTask (1225112227903) (Entrypoint: 1418042656596)
 *
 * States:
 *   - Start (1418042656595)
 *   - Plantype (1418042674811)
 *
 * Vars:
 */
bool TransitionCondition1418042683692::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1418042682960) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}

// State: Plantype in Plan: MasterPlanTestConditionPlanType

} // namespace alicaAutogenerated
