#ifndef Lvl3CONSTRAINT_H_
#define Lvl3_H_
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

class Constraint1524452937477 : public BasicConstraint
{
    void getConstraint(shared_ptr<ProblemDescriptor> c, shared_ptr<RunningPlan> rp);
};

} // namespace alicaAutogenerated

#endif /* Lvl3CONSTRAINT_H_ */
