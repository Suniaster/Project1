#include "include/views/SfmlView.h"
#include "include/world/EntitiesController.h"
#include "include/world/WorldController.h"

int main()
{
    EntitiesController* objs_manager = new EntitiesController();
    SfmlView* view = new SfmlView(objs_manager);
    WorldController world(objs_manager, view);
       
    objs_manager->addObject(new BaseEntity(Vector2d(0,0)));

    world.startWorld();

    delete objs_manager;
    delete view;
    return 0;
}