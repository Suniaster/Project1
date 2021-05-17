#include "../../include/interfaces/IWorldEngine.h"

IWorldEngine::IWorldEngine(IEntityContainer* e) {
	this->entities = e;
}
IWorldEngine::~IWorldEngine() {}
