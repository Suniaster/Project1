#include "../../include/world/EntitiesController.h"


void EntitiesController::addObject(BaseEntity* newObj) {
	this->container.push_back(newObj);
	this->size++;
}

void EntitiesController::moveAllObjects(float dt) {
	for (int i = 0; i < this->size; i += 1) {
		this->container[i]->move(dt);
	}
}

EntitiesController::~EntitiesController() {
	for (int i = 0; i < this->size; i += 1) {
		delete this->container[i];
	}
}