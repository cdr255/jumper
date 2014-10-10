#include "jumper.hpp"

int main()
{
  sf::RenderWindow window(sf::VideoMode(640, 480), "Jumper");

  GameObject player(0, 0, 32, 32, "Ted.png", 2);

  while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
        {
	  if (event.type == sf::Event::Closed)
	    window.close();

        }

      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	player.move(4);
      else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	player.move(6);
      else
	player.move(5);
      
      window.clear();
      window.draw(player.sprite);
      window.display();
    }

  return 0;
}
