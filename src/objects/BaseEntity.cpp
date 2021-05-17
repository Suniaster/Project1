#include "../../include/objects/BaseEntity.h"

BaseEntity::BaseEntity(Vector2d pos) : IEntity(pos){
	this->type = "Base-Entity";
}