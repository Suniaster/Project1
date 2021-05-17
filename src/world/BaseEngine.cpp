#include "../../include/world/BaseEngine.h"
#include <chrono>

BaseEngine::BaseEngine(IEntityContainer* objs) : IWorldEngine(objs) {}

void BaseEngine::timeStep(double dt) {}