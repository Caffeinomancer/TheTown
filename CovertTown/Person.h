#pragma once

#include "Entity.h"

class Person : Entity
{
public:

   Person();
   ~Person();



private:

   void setName(std::string name) { mName = name; };
   void setHealth(float health) { mHealth = health; };
   void setAttributes(std::vector<std::string> attributes) { mAttributes = attributes; };

};