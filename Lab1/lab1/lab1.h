#include <iostream>
#include <fstream>
#include <string>
#pragma once

void printArray(char* arr, int length);
int compareArray(char* arr1, char* arr2, int length);
char* value(char* arr, std::string input);

// 1. Строка как массив символов.
// - Строка хранится в виде одномерного массива символов(char[]).
// - Выполните обработку строки, используя только исходный массив.
// - Дополнительные массивы вводить нельзя.
int editArray(char* arr, int length);
char* askArray(int CONSOLE_OUTPUT = true);

// 2. Строка как строка в стиле языка Си(строка, завершающаяся символом '\0').
// - Строка хранится в виде Cи - строки, которая завершается нулевым символом('\0').
// - Выполните обработку строки, не используя дополнительных массивов.
int editString(std::string& s);
std::string askString(int CONSOLE_OUTPUT = true);

// 3. Строка хранится в файле.
// - Строка записана в файл 1.
// - Программа должна считать строку из файла, обработать ее по первому или второму
// варианту, и записать результат в файл 2.
// - Использование дополнительных массивов запрещено.
int editFile(std::string FILENAME, std::string FILENAME_output);
int editFile(int CONSOLE_OUTPUT = true);
