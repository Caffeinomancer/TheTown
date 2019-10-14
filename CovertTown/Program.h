#pragma once
/* TODO:
-Load Town




*/




#include <iostream>
#include <string>
#include <istream> // Delete?
#include <fstream>
#include <chrono> //Delete?
#include <ctime> //Delete?
#include <vector>

//Windows
#include <Windows.h>

using namespace std;

const string DATA_FILE = "data.txt";

bool ValidateInput(string input, int choiceRange = 0);

void Initialize();
void GameLoop();
void CheckInput(bool shouldQuit);
void NewTown();
void LoadTown();
void ClearConsole();

inline bool FileExists(const string& fileName);

