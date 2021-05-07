#include <SFML/Graphics.hpp>
#include <time.h>
#include <stdio.h>



class Circle {
    float x, y;

    void move(float dt) {
        x += 0.1;
        y += 0.1;
    }
};


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 700), "SFML works!");
    sf::CircleShape shape(100.f);
 
    shape.setFillColor(sf::Color::Green);
    float x = 0;
    float y = 0;
    long t = time(0);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        printf("\rPosicao x: %f", x);
        
        shape.setPosition(x, y);
        x += 0.1;
        y += 0.1;
        t = time(0);


        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}