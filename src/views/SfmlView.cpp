#include "../../include/views/SfmlView.h"


SfmlView::SfmlView(EntitiesController* e):WorldViewInterface(e){
    this->window = new sf::RenderWindow(sf::VideoMode(800, 700), "SFML works!");
}

bool SfmlView::stopWorld() {
	return !this->window->isOpen();
}

void SfmlView::render() {
    window->clear();
    sf::Event event;
    while (window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window->close();
    }

    for (int i = 0; i < this->objects->size; i++) {
        BaseEntity* obj = this->objects->container[i];
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);
        shape.setPosition(obj->position.x, obj->position.y);
        window->draw(shape);
    }
    window->display();
}
