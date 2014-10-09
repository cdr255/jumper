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
    
#endif
