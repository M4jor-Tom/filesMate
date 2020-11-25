#pragma once
#include <list>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstdbool>

using namespace std;

//Reads a file and loads its content with given type
template <typename T> list<T> readFile(string path);

//OverWrites a file, creates it if it doesn't exist, and writes data
template <typename T> bool writeFile(list<T> toWrite, const char *path);