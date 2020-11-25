#include "../Headers/filesMate.h"

using namespace std;

template <typename T> list<T> readFile(string path)
{
	
}

template <typename T> bool writeFile(list<T> toWrite, const char *path)
{
	bool success = true;
	FILE* filePtr = NULL;
	fopen_s(&filePtr, path, "r");

	for (T element : toWrite)
		success = success && fwrite(&element, sizeof(T), 1, filePtr);

	fclose(filePtr);
	return success;
}