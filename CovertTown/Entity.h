#pragma once

#include "Program.h" 

class Entity
{
public:
   Entity();
   ~Entity();

protected:
   virtual void setName(string) = 0;
   virtual void setHealth(int health) = 0;
   virtual void setAttributes(vector<string> attributes);

   std::string mName;
   float mHealth;
   vector<string> mAttributes;

private:


};
