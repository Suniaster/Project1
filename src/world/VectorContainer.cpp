#include "../../include/world/VectorContainer.h"


void VectorContainer::addEntity(IEntity* newObj) {
	this->container.push_back(newObj);
	this->size++;
}

int VectorContainer::getSize() {
	return this->size;
}

IEntity* VectorContainer::getEntity(int i) {
	return this->container[i];
}

void VectorContainer::removeEntity(std::string){}

VectorContainer::~VectorContainer() {
	for (int i = 0; i < this->size; i += 1) {
		delete this->container[i];
	}
}