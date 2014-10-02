/*
 * SuccessMarks.h
 *
 *  Created on: Jun 16, 2014
 *      Author: Stefan Jakob
 */

#ifndef SUCCESSMARKS_H_
#define SUCCESSMARKS_H_

using namespace std;

#include <map>
#include <memory>
#include <unordered_set>
#include <list>
#include <algorithm>
#include <memory>

namespace alica
{

	class AbstractPlan;
	class EntryPoint;

	/**
	 * Globally holds information about succeeded entrypoints for a specific robot
	 */
	class SuccessMarks
	{
	public:
		SuccessMarks();
		SuccessMarks(list<long> epIds);
		virtual ~SuccessMarks();


		//TODO uses ICollection in C# so far only unordered_set needed
		void limitToPlans(unique_ptr<unordered_set<AbstractPlan*> > active);
		map<AbstractPlan*,shared_ptr<list<EntryPoint*> > >& getSuccessMarks();
		void setSuccesMarks(map<AbstractPlan*,shared_ptr<list<EntryPoint*> > > succesMarks);
		void clear();
		shared_ptr<list<EntryPoint*> >succeededEntryPoints(AbstractPlan* p);
		void removePlan(AbstractPlan* plan);
		void markSuccessfull(AbstractPlan* p, EntryPoint* e);
		bool succeeded(AbstractPlan* p, EntryPoint* e);
		bool succeeded(long planId, long entryPointId);
		bool anyTaskSucceeded(AbstractPlan* p);
		list<long> toList();

	protected:
		map<AbstractPlan*,shared_ptr<list<EntryPoint*> > > succesMarks;
	};

} /* namespace alica */

#endif /* SUCCESSMARKS_H_ */
