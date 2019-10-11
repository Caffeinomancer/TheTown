#pragma once
#include <vector>
#include <string>

class Entity
{
public:
   Entity();
   ~Entity();

   virtual void setName(std::string) = 0;
   virtual void setHealth(int health) = 0;
   virtual void setAttributes(std::vector<std::string> attributes);

protected:
   std::string mName;

   float mHealth;
   
   std::vector<std::string> mAttributes;

private:


};
