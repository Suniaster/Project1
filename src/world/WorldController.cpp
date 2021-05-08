#include "../../include/world/WorldController.h"
#include <chrono>

WorldController::WorldController(EntitiesController* objs, WorldViewInterface* view) {
	this->view = view;
	this->entities = objs;
}

void WorldController::runMainLoop() {
	std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	std::chrono::steady_clock::time_point end;

	float dt;
	float timeAccumulator = 0;
	float fixedDt = 1 / 60.0;

	while ( !this->view->stopWorld() ) {
		end = std::chrono::steady_clock::now();
		dt = (std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()) / 1000000.0;
		begin = std::chrono::steady_clock::now();

		timeAccumulator += dt;
		while (timeAccumulator >= fixedDt) {
			printf("\rDelta T: %f", 1 / fixedDt);

			this->entities->moveAllObjects(dt);

			timeAccumulator -= fixedDt;
		}
		this->view->render();
	}
}

void WorldController::startWorld() {
	this->runMainLoop();
}