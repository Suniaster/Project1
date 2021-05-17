#include "../../include/interfaces/IEntity.h"

IEntity::IEntity(Vector2d initial_pos) {
	this->position = initial_pos;
	this->vel = Vector2d(0, 0);
	this->accel = Vector2d(0, 0);
	this->type = "BaseEntity-Interface";
	//this->uid = 
}

IEntity::~IEntity() {}

void IEntity::move(double dt) {
	this->vel = this->vel + (this->accel * dt);
	this->position = this->position + (this->vel * dt);
}