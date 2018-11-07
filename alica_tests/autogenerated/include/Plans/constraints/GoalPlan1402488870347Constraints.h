#ifndef GoalPlanCONSTRAINT_H_
#define GoalPlan_H_
#include "engine/BasicConstraint.h"
#include <memory>

using namespace std;
using namespace alica;

namespace alica
{
class ProblemDescriptor;
class RunningPlan;
} // namespace alica

namespace alicaAutogenerated
{

class Constraint1403773741874 : public BasicConstraint
{
    void getConstraint(shared_ptr<ProblemDescriptor> c, shared_ptr<RunningPlan>);
};

} // namespace alicaAutogenerated

#endif /* GoalPlanCONSTRAINT_H_ */
