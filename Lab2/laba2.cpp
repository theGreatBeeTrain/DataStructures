#define _CRT_SECURE_NO_WARNINGS

#define SET 3

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
    return s;
}

//char* putCharMalloc(char* adress, int m, char c)
//{
//
//	char* str2 = (char*)malloc((m + 1) * sizeof(char));
//	if (adress && str2) {
//		for (int i = 0; i < m; i++)
//			str2[i] = adress[i];
//		str2[m] = c;
//		free(adress);
//	}
//	adress = str2;
//
//	return adress;
//}
//
char* readStringCalloc()
{

	char* s = (char*)calloc(SET, sizeof(char));
	char c;
	int m = 0;
	std::cin >> c;
	while (c != char(30)) {
		s = putCharRealloc(s, m, c);
		m++;
		std::cin >> c;
	}

	return s;
}
//

//
//char* fileToArr(std::string FILENAME) {
//
//	FILE* f = fopen(FILENAME.c_str(), "r");
//	if (!f)
//	{
//		perror("File opening failed");
//		return NULL;
//	}
//	char* RESULT = (char*)malloc(sizeof(char));
//	int c, l = 0;
//	while ((c = fgetc(f)) != EOF) {
//		RESULT = putCharMalloc(RESULT, l, c);
//		l++;
//	}
//	RESULT = putCharMalloc(RESULT, l, '\0');
//	fclose(f);
//
//
//	return RESULT;
//}

char* putCharMalloc(char* arr1, int m, char c) {
	char* arr2 = (char*)malloc((m + 2) * sizeof(char));
	int i = 0;
	
	if (arr2) {
		if (arr1) {
			for (; i < m; i++)
				arr2[i] = arr1[i];
			free(arr1);
		}
		arr2[m] = c;
		arr2[m+1] = '\0';
		return arr2;
	}
	return arr1;
}

char* putCharRealloc(char* arr1, int m, char c)
{
	if (arr1) {
		if ((m + 1) % SET == 0)
			arr1 = (char*)realloc(arr1, (m + SET) * sizeof(char));

	}
	else
		arr1 = (char*)malloc(SET * sizeof(char));
	arr1[m] = c;
	arr1[m + 1] = '\0';

	return arr1;
}