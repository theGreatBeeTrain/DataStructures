#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "laba2.h"

char* readStringMalloc()
{
    char* s = (char*)malloc(sizeof(char));
    char c;
    int m = 0;
    std::cin >> c;
	while (c != char(30)) {
		s = putCharMalloc(s, m, c);
		m++;
		std::cin >> c;
	}
	s = putCharMalloc(s, m, '\0');
    return s;
}

char* putCharMalloc(char* adress, int m, char c)
{

	char* str2 = (char*)malloc((m + 1) * sizeof(char));
	if (str2) {
		for (int i = 0; i < m; i++)
			str2[i] = adress[i];
		str2[m] = c;
	}
	free(adress);
	adress = str2;

	return adress;
}

char* readStringCalloc()
{
	int set = 3;
	char* s = (char*)calloc(set, sizeof(char));
	char c;
	int m = 0;
	std::cin >> c;
	while (c != char(30)) {
		s = putCharRealloc(s, set, m, c);
		m++;
		std::cin >> c;
	}
	s = putCharMalloc(s, m, '\0');
	return s;
}

char* putCharRealloc(char* adress, int set, int m, char c)
{
	if (m % set == 0)
		adress = (char*)realloc(adress, (m + set) * sizeof(char));
	adress[m] = c;

	return adress;
}

char* fileToArr(std::string FILENAME) {

	FILE* f = fopen(FILENAME.c_str(), "r");
	if (!f)
	{
		perror("File opening failed");
		return NULL;
	}
	char* RESULT = (char*)malloc(sizeof(char));
	int c, l = 0;
	while ((c = fgetc(f)) != EOF) {
		RESULT = putCharMalloc(RESULT, l, c);
		l++;
	}
	RESULT = putCharMalloc(RESULT, l, '\0');
	fclose(f);


	return RESULT;
}
