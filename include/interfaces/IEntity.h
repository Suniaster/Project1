#ifndef INTERFACE_ENTITY_H
#define INTERFACE_ENTITY_H

#include "../common/Vector2d.h"
#include <string>

class IEntity{
public:
	std::string type, uid;
	Vector2d position, vel, accel;
	IEntity(Vector2d initial_pos);
	~IEntity();

	void move(double);
private:

};

#endif