#pragma once

#include <iostream>
#include <string>
#include <istream> // Delete?
#include <fstream>
#include <chrono> //Delete?
#include <ctime> //Delete?

using namespace std;

const string DATA_FILE = "data.txt";

bool ValidateInput(string input, int choiceRange = 0);

void Initialize();
void NewTown();
void LoadTown();
void ClearConsole();

inline bool FileExists(const string& fileName);

