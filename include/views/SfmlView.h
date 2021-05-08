#ifndef SFML_VIEW_H
#define SFML_VIEW_H
#include "../world/WorldViewInterface.h"
#include <SFML/Graphics.hpp>

class SfmlView : public WorldViewInterface {
private:
	sf::RenderWindow* window;
public:

	SfmlView(EntitiesController*);

	bool stopWorld();
	void render();
};


#endif // !SFML_VIEW_H
