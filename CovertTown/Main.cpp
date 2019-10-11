#include "Program.h"

int main()
{
   char input[32];
   cin.getline(input, 32);
   
   for (int i = 0; i < 32; i++)
      cout << input[i];


   return 0;
}