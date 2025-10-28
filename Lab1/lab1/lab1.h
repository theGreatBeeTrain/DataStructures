#include <iostream>
#include <fstream>
#include <string>
#pragma once

void printArray(char* arr, int length);
int compareArray(char* arr1, char* arr2, int length);
char* value(char* arr, std::string input);

// 1. ������ ��� ������ ��������.
// - ������ �������� � ���� ����������� ������� ��������(char[]).
// - ��������� ��������� ������, ��������� ������ �������� ������.
// - �������������� ������� ������� ������.
int editArray(char* arr, int length);
char* askArray(int CONSOLE_OUTPUT = true);

// 2. ������ ��� ������ � ����� ����� ��(������, ������������� �������� '\0').
// - ������ �������� � ���� C� - ������, ������� ����������� ������� ��������('\0').
// - ��������� ��������� ������, �� ��������� �������������� ��������.
int editString(std::string& s);
std::string askString(int CONSOLE_OUTPUT = true);

// 3. ������ �������� � �����.
// - ������ �������� � ���� 1.
// - ��������� ������ ������� ������ �� �����, ���������� �� �� ������� ��� �������
// ��������, � �������� ��������� � ���� 2.
// - ������������� �������������� �������� ���������.
int editFile(std::string FILENAME, std::string FILENAME_output);
int editFile(int CONSOLE_OUTPUT = true);
