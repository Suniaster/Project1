#include "../../include/interfaces/IWorld.h"
#include <chrono>

using namespace std::chrono;

IWorld::IWorld(IWorldEngine* engine, IView* view, IEntityContainer* container) {
	this->engine = engine;
	this->worldTime = 0;
	this->entities = container;
	this->view = view;
}

IWorld::~IWorld() {
	//delete this->engine;
	//delete this->entities;
}

void IWorld::beforeTimeStep() {}
void IWorld::afterTimeStep() {}
void IWorld::singleTimeStep(double dt) {
	printf("\rDelta T: %f", 1 / dt);

	this->beforeTimeStep();
	this->engine->timeStep(dt);
	this->afterTimeStep();
}


void IWorld::startWorld() {
	steady_clock::time_point current_time = steady_clock::now();
	steady_clock::time_point new_time;

	this->worldTime = 0;
	double frame_time;
	double timeAccumulator = 0;
	const double fixedDt = 0.01;

	while (!this->view->stopWorld()) {
		new_time = steady_clock::now();
		frame_time = (duration_cast<microseconds>(new_time - current_time).count()) / 1000000.0;
		current_time = new_time;

		timeAccumulator += frame_time;
		while (timeAccumulator >= fixedDt) {
			this->singleTimeStep(fixedDt);
			timeAccumulator -= fixedDt;
			this->worldTime += fixedDt;
		}

		this->view->render();
	}
}
