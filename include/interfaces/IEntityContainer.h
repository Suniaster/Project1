#ifndef INTERFACE_ENTITY_CONTAINER_H
#define INTERFACE_ENTITY_CONTAINER_H

#include "IEntity.h"
#include <functional>

class IEntityContainer{
public:
	virtual void addEntity(IEntity*) = 0;
	virtual void removeEntity(std::string uid) = 0;
	virtual IEntity* getEntity(int index) = 0;
	virtual int getSize() = 0;

	virtual ~IEntityContainer() {};
private:

};

#endif