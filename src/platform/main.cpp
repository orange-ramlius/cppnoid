#include <SFML/Window.hpp>

int main(void) {
  sf::Window window(sf::VideoMode(sf::Vector2u(800, 600)), "My window");

  while (window.isOpen()) {
    sf::Event event = window.pollEvent();
    if (eventClosed)
      window.close();
  }

  return 0;
}
