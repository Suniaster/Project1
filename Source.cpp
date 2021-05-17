#include "include/world/VectorContainer.h"
#include "include/views/SfmlView.h"
#include "include/world/BaseEngine.h"

#include "include/interfaces/IWorld.h"

#include "include/objects/BaseEntity.h"

int main(){
    VectorContainer container;
    SfmlView view(&container);
    BaseEngine engine(&container);

    IWorld test_world(&engine, &view, &container);

    container.addEntity(new BaseEntity(Vector2d(0, 0)));

    test_world.startWorld();

    return 0;
}