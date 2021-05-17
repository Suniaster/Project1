#ifndef BASE_ENGINE
#define BASE_ENGINE
#include "../interfaces/IWorldEngine.h"

class BaseEngine : public IWorldEngine {
public:
	BaseEngine(IEntityContainer*);
	virtual void timeStep(double);
};


#endif // !WORLD_CONTROLLER
