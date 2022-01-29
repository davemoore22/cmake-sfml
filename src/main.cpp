#include "main.hpp"

auto main(int argc, char *argv[]) -> int {

  sf::Window window(sf::VideoMode(640, 480), "Hello, world!");

  while (window.isOpen()) {
    sf::Event event{};
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }
  }

  return 0;
}