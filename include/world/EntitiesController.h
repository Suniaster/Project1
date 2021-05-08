#ifndef ENTITY_CONTROLLER_H
#define ENTITY_CONTROLLER_H
#include "../objects/BaseEntity.h"
#include <vector>
#define CONTROLLER_MAX_SIZE 30

class EntitiesController {
public:
	int size = 0;
	std::vector<BaseEntity*> container;

	void addObject(BaseEntity*);
	void moveAllObjects(float dt);

	~EntitiesController();
};


#endif // !OBJS_CONTROLLER_H
