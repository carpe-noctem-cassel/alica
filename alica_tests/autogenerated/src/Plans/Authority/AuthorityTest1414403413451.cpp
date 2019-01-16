#include "Plans/Authority/AuthorityTest1414403413451.h"
using namespace alica;
/*PROTECTED REGION ID(eph1414403413451) ENABLED START*/ // Add additional using directives here
#include "DummyTestSummand.h"
#include "engine/USummand.h"
#include <DistXContourTest.h>
/*PROTECTED REGION END*/
namespace alicaAutogenerated
{
// Plan:AuthorityTest

/* generated comment

 Task: DefaultTask  -> EntryPoint-ID: 1414403429951

 Task: AttackTask  -> EntryPoint-ID: 1414403522424

 */
shared_ptr<UtilityFunction> UtilityFunction1414403413451::getUtilityFunction(Plan* plan)
{
    /*PROTECTED REGION ID(1414403413451) ENABLED START*/
    std::shared_ptr<UtilityFunction> function = std::make_shared<UtilityFunction>(0.1, 0.1, plan);
    DummyTestSummand* us = new DummyTestSummand(1.0);
    us->addEntryPoint(plan->getEntryPointByID(1414403522424));
    us->addEntryPoint(plan->getEntryPointByID(1414403429951));

    function->editUtilSummands().emplace_back(us);

    return function;

    /*PROTECTED REGION END*/
}

// State: UpperState in Plan: AuthorityTest

// State: LowerState in Plan: AuthorityTest

} // namespace alicaAutogenerated