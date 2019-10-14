#include "Program.h"

void Initialize()
{
   bool inputValid = false;
   string input;

   if (!FileExists(DATA_FILE))
   {
      ofstream of("data.txt");

      return;
   }

   while (!inputValid)
   {
      input = "";
      std::cout << "1. Start a new Town\n";
      std::cout << "2. Load exisiting Town\n\n";
      std::cout << "Choice: ";

      getline(cin, input);
      cout << endl;

      inputValid = ValidateInput(input, 2);
   }

   if (input[0] == '1')
      NewTown();
   else
      LoadTown();

}

inline bool FileExists(const string& fileName)
{
   ifstream f(fileName.c_str());
   return f.good();
}

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

void NewTown()
{
   ifstream f;
   ofstream of;
   string output;
   string name;

   ClearConsole();

   f.open("intro.txt");

   getline(f, output);
   cout << output << endl;
   cout << "Name: ";
   getline(cin, name);
   getline(f, output);
   cout << output << endl;
   getline(f, output);
   cout << output << ", " << name << ".\n";
   
   while (!f.eof())
   {
      getline(f, output);
      cout << output << endl;
   }
   
   f.close();

   of.open("data.txt", std::ofstream::trunc);
   of << "1--|Name: " << name;
   

   of.close();
}

void LoadTown()
{

}

void ClearConsole()
{
   for (int i = 0; i < 28; i++)
      cout << endl;
}