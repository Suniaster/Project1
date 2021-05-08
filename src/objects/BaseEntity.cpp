#include "../../include/objects/BaseEntity.h"

BaseEntity::BaseEntity(Vector2d pos){
	this->position = pos;
	this->vel = Vector2d(0, 0);
	this->accel = Vector2d(0, 0);
}

void BaseEntity::move(float dt) {
	this->vel = this->vel + (this->accel * dt);
	this->position = this->position + (this->vel * dt);
}