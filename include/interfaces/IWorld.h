#ifndef INTERFACE_WORLD_H
#define INTERFACE_WORLD_H

#include "IWorldEngine.h"
#include "IEntityContainer.h"
#include "IView.h"

class IWorld{
public:
	IWorld(IWorldEngine*, IView*, IEntityContainer*);
	~IWorld();
	void startWorld();

protected:
	double worldTime;
	IWorldEngine* engine;
	IEntityContainer* entities;
	IView* view;

	virtual void beforeTimeStep();
	virtual void afterTimeStep();

private:
	void singleTimeStep(double dt);
};

#endif