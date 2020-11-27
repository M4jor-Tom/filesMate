#pragma once
#include <list>
#include <string>
#include <fstream>

using namespace std;

template <typename T> list<T> readFile(string path, T type)
{
	ifstream file(path);
	list<T> content;
	if (file.is_open())
	{
		file.read((char *)&content, sizeof(T));

		file.close();
	}

	return content;
}

template <typename T> bool writeFile(list<T> toWrite, const char* path)
{
	ofstream file(path);

	if (file.is_open())
	{
		file.write((const char *)&toWrite, sizeof(toWrite));

		file.close();
	}
	else return false;

	return true;
}