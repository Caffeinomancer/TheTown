#include "Program.h"

bool ValidateInput(string input, int choiceRange)
{
   bool validity = false;
   
   if (choiceRange != 0)
   {
      
      int inputToInt = atoi(&input[0]);

      if (inputToInt <= 0 || inputToInt > choiceRange)
         validity = false;
      else
         validity = true;

      return validity;
   }

   return validity;
}
