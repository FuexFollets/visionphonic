#include <SFML/Graphics.hpp>
#include <vector>

int main() {
    sf::RenderWindow window(sf::VideoMode(sf::Vector2u(800, 600)), "SFML works!");
    sf::CircleShape shape(100.F);
    shape.setFillColor(sf::Color::Green);
    window.draw(shape);
    window.display();

    while (window.isOpen()) {
        sf::Event event {};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }
}
