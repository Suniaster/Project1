#ifndef WORLD_CONTROLLER
#define WORLD_CONTROLLER
#include "WorldViewInterface.h"
#include "EntitiesController.h"

class WorldController {
private:
	void runMainLoop();
public:
	EntitiesController* entities;
	WorldViewInterface* view;
	WorldController(EntitiesController*, WorldViewInterface*);

	void startWorld();
};


#endif // !WORLD_CONTROLLER
