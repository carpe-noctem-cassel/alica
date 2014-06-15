/*
 * BasicBehaviour.cpp
 *
 *  Created on: Jun 4, 2014
 *      Author: stefan
 */

#include "engine/BasicBehaviour.h"
#include "engine/AlicaEngine.h"
#include "engine/ITeamObserver.h"

namespace alica
{

	BasicBehaviour::BasicBehaviour(string name)
	{
		this->name = name;
		this->parameters = new map<string, string>();
	}

	BasicBehaviour::BasicBehaviour()
	{
		this->name = "Test1234";
		this->parameters = new map<string, string>();
	}

	BasicBehaviour::~BasicBehaviour()
	{
	}

	const string BasicBehaviour::getName() const
	{
		return this->name;
	}

	void BasicBehaviour::setName(string name)
	{
		this->name = name;
	}

	/**
	 * Convenience method to obtain the robot's own id.
	 * @return the own robot id
	 */
	int BasicBehaviour::getOwnId()
	{
		return AlicaEngine::getInstance()->getTeamObserver()->getOwnId();
	}

	map<string, BasicBehaviour*(*)()>* BasicBehaviour::creators = BasicBehaviour::getCreatorMap();

	map<string, BasicBehaviour*(*)()> * BasicBehaviour::getCreatorMap()
	{
		// never delete'ed. (exist until program termination)
		// because we can't guarantee correct destruction order
		if (!BasicBehaviour::creators)
		{
			BasicBehaviour::creators = new map<string, BasicBehaviour*(*)()>();
		}
		return BasicBehaviour::creators;
	}



} /* namespace alica */
