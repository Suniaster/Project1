#ifndef WORLD_VIEW_INTERFACE
#define WORLD_VIEW_INTERFACE

#include "EntitiesController.h"

class WorldViewInterface {
protected:
	EntitiesController* objects;
public:
	WorldViewInterface(EntitiesController*);
	virtual bool stopWorld()= 0;
	virtual void render()	= 0;
};


#endif // !WORLD_VIEW_INTERFACE

