#ifndef SFML_VIEW_H
#define SFML_VIEW_H
#include "../interfaces/IView.h"
#include <SFML/Graphics.hpp>

class SfmlView : public IView{
private:
	sf::RenderWindow* window;
public:

	SfmlView(IEntityContainer*);

	bool stopWorld();
	void render();
	void renderEntity(IEntity*);
};


#endif // !SFML_VIEW_H
