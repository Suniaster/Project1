#ifndef VECTOR_CONTAINER_H
#define VECTOR_CONTAINER_H
#include "../interfaces/IEntityContainer.h"

#include <vector>
#define CONTROLLER_MAX_SIZE 30

class VectorContainer : public IEntityContainer{
public:
	int size = 0;
	std::vector<IEntity*> container;

	void addEntity(IEntity*);
	void removeEntity(std::string uid);
	IEntity* getEntity(int index);
	int getSize();

	~VectorContainer();
};


#endif // !OBJS_CONTROLLER_H
