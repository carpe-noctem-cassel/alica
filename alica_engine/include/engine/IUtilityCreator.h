#pragma once

#include <memory>

namespace alica
{
using std::shared_ptr; // TODO: remove when templates can be changed

class BasicUtilityFunction;

class IUtilityCreator
{
public:
    virtual ~IUtilityCreator() {}

    virtual std::shared_ptr<BasicUtilityFunction> createUtility(int64_t utilityfunctionConfId) = 0;
};

} /* namespace alica */
