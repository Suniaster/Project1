#include "../../include/views/SfmlView.h"
#include "../../include/objects/BaseEntity.h"

SfmlView::SfmlView(IEntityContainer* e):IView(e){
    this->window = new sf::RenderWindow(sf::VideoMode(800, 700), "SFML works!");
}

bool SfmlView::stopWorld() {
	return !this->window->isOpen();
}

void SfmlView::renderEntity(IEntity* obj) {
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(obj->position.x, obj->position.y);
    window->draw(shape);
}

void SfmlView::render() {
    window->clear();
    sf::Event event;
    while (window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window->close();
    }

    int n_entities = this->entities->getSize();
    for (int i = 0; i < n_entities; i++) {
        this->renderEntity(this->entities->getEntity(i));
    }

    window->display();
}
