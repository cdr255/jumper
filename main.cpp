#include "jumper.hpp"

int main()
{
  sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");
  sf::Texture ted_front;
  if(!ted_front.loadFromFile("Ted.png"))
    {
      //error
      return 101;
    }
  sf::Sprite player;
  player.setTexture(ted_front);
  player.setScale(2.0f,2.0f);

  while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
        {
	  if (event.type == sf::Event::Closed)
	    window.close();
        }

      window.clear();
      window.draw(player);
      window.display();
    }

  return 0;
}
