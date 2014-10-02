/*
 * AbstractPlan.h
 *
 *  Created on: Mar 5, 2014
 *      Author: Stephan Opfer
 */

#ifndef ABSTRACTPLAN_H_
#define ABSTRACTPLAN_H_

using namespace std;

#include <list>
#include <SystemConfig.h>
#include <string>
#include <algorithm>

#include "AlicaElement.h"

namespace alica
{

	class Variable;
	class PreCondition;
	class RuntimeCondition;
	class UtilityFunction;

	/**
	 * Super class of plans, plantypes and behaviourconfigurations.
	 */
	class AbstractPlan : public AlicaElement
	{
	public:
		AbstractPlan();
		virtual ~AbstractPlan();

		bool containsVar(const Variable* v);
		bool containsVar(string name);

		bool isMasterPlan() const;
		void setMasterPlan(bool isMasterPlan);
		virtual string toString() const;
		unsigned long getAuthorityTimeInterval() const;
		void setAuthorityTimeInterval(unsigned long authorityTimeInterval);
		const virtual string& getFileName() const;
		virtual void setFileName(const string& fileName);
		shared_ptr<list<Variable*>> getVariables();
		void setVariables(shared_ptr<list<Variable*>> variables);
		RuntimeCondition* getRuntimeCondition();
		void setRuntimeCondition(RuntimeCondition* runtimeCondition);
		PreCondition* getPreCondition();
		void setPreCondition(PreCondition* preCondition);
		UtilityFunction* getUtilityFunction();
		void setUtilityFunction(UtilityFunction* utilityFunction);
		double getUtilityThreshold() const;
		void setUtilityThreshold(double utilityThreshold = 1.0);

	private:
		unsigned long authorityTimeInterval;
		/**
		 * This plan's runtime condition.
		 */
		RuntimeCondition* runtimeCondition;
		/**
		 * This plan's precondition
		 */
		PreCondition* preCondition;
		/**
		 * This plan's Utility function
		 */
		UtilityFunction* utilityFunction;

	protected:
		string fileName;
		/**
		 *  Whether this plan is marked as a MasterPlan.
		 */
		bool masterPlan;
		shared_ptr<list<Variable*>> variables;
		/**
		 * The utility threshold, the higher, the less likely dynamic changes are.
		 */
		double utilityThreshold = 1.0;
	};

} /* namespace Alica */

#endif /* ABSTRACTPLAN_H_ */
