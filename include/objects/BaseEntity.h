#ifndef BASE_ENTITY_H
#define BASE_ENTITY_H

#include "../common/Vector2d.h"

class BaseEntity{
public:
	Vector2d position, vel, accel;
	BaseEntity(Vector2d position);

	void move(float dt);
};


#endif // !BASE_ENTITY_H


