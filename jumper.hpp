#ifndef _JUMPER_HPP_
#define _JUMPER_HPP_

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

class GameObject 
{
public: 
  sf::Texture texture;
  sf::Sprite sprite;
  // sf::Rect rectangle;
  std::string texture_file;
  GameObject(int, int, int, int, std::string, int);
  void move(int);
};

GameObject::GameObject(int l, int t, int w, int h, std::string file, int s) 
{
  if(!texture.loadFromFile(file, sf::IntRect(l, t, w, h)))
    {
      std::cout << "Error, could not load texture.";
    }
  
  sprite.setTexture(texture);
  sprite.setScale(s,s);
  
}

void GameObject::move(int dir)
{
  switch (dir)
    {
    case 4:
      sprite.move(-10, 0);
      break;
    case 6:
      sprite.move(10, 0);
      break;
    case 8:
      sprite.move(0, 10);
      break;
    case 2:
      sprite.move(0, -10);
      break;
    case 5:
      sprite.move(0, 0);
      break;
    }
}
#endif
