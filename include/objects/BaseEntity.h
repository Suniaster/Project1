#ifndef BASE_ENTITY_H
#define BASE_ENTITY_H

#include "../common/Vector2d.h"
#include "../interfaces/IEntity.h"

class BaseEntity : public IEntity{
public:
	Vector2d position, vel, accel;
	BaseEntity(Vector2d position);
};


#endif // !BASE_ENTITY_H


