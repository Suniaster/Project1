#ifndef INTERFACE_WORLD_ENGINE_H
#define INTERFACE_WORLD_ENGINE_H

#include "IEntityContainer.h"

class IWorldEngine{
public:

	IWorldEngine(IEntityContainer*);
	~IWorldEngine();

	virtual void timeStep(double) = 0;
protected:
	IEntityContainer* entities;

};

#endif