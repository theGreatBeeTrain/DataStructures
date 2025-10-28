#include "lab1.h"

void printArray(char* arr, int length)
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i];
	std::cout << std::endl;
}

// 4. Удалить из строки все знаки «+», если они стоят перед цифрой,
// а после этой цифры идёт любой знак препинания или другой символ.

int editArray(char* arr, int length)
{

	for (int i = 0; i < (length - 2); i++) {
		if (arr[i] == '+')
			if ((arr[i + 1] >= '0') && (arr[i+1] <= '9'))
				if ((arr[i + 2] < '0') || (arr[i + 2] > '9'))
				{
					char c;
					for (int j = i; j < (length - 1); j++) {
						c = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = c;
					}
					length--;
					arr[length] = ' ';
				}
	}

	return length;
}

char* askArray(int CONSOLE_OUTPUT)
{
	int l;
	if (CONSOLE_OUTPUT)
		std::cout << "#1.1 Enter the amount of symbols in dynamic array: ";
	std::cin >> l;

	if (CONSOLE_OUTPUT)
		std::cout << "#1.2 Enter the contents of an dynamic array: ";
	char* arr = (char*)malloc(l * sizeof(char));
	for (int i = 0; i < l; i++)
		std::cin >> arr[i];

	editArray(arr, l);

	if (CONSOLE_OUTPUT) {
		std::cout << std::endl << "#1.3 Edited contents of dynamic array: ";
		printArray(arr, l);
	}

	return arr;
}

int editString(std::string& s)
{
	if (s.length() < 3)
		return s.length();
	for (int i = 0; i < (s.length() - 2); i++) {
		if (s[i] == '+')
			if ((s[i + 1] >= '0') && (s[i + 1] <= '9'))
				if ((s[i + 2] < '0') || (s[i + 2] > '9'))
				{
					s.replace(i, (s.length() - i - 1), s.substr(i + 1, (s.length() - i - 2)));
				}
	}

	return s.length();
}

std::string askString(int CONSOLE_OUTPUT)
{

	std::string arr;

	if (CONSOLE_OUTPUT)
		std::cout << "#2.1 Enter the contents of a string: ";
	std::cin >> arr;

	editString(arr);

	if (CONSOLE_OUTPUT)
		std::cout << "#2.2 Edited contents of a string: " << arr << std::endl;

	return arr;
}

int editFile(std::string FILENAME1, std::string FILENAME2)
{
	std::ifstream fin;
	fin.open("1.txt");
	if (!fin.is_open()) {
		std::cout << "ERROR: File cannot be opened!" << std::endl;
		return -1;
	}
	char c;
	std::string s;
	std::string s1 = { ' ' };
	while (fin >> c) {
		s1[0] = c;
		s.append(s1);
	}
	fin.close();

	int l = editString(s);
	
	std::ofstream fout;
	fout.open("2.txt");
	for (int i = 0; i < l; i++) {
		fout << s[i];
	}

	fout.close();

	return 0;
}

int editFile(int CONSOLE_OUTPUT)
{

	if (CONSOLE_OUTPUT)
		std::cout << "#3 Reading contents of \"1.txt\", editing them and putting them into \"2.txt\"... ";

	if (CONSOLE_OUTPUT && !editFile("1.txt", "2.txt"))
		std::cout << "Done!" << std::endl;

	return 0;
}

int compareArray(char* arr1, char* arr2, int length) {
	for (int i = 0; i < length; i++)
		if (arr1[i] != arr2[i])
			return false;
	return true;
};

char* value(char* arr, std::string input)
{
	int length = input.length();
	free(arr);
	char* arr1 = (char*)malloc(length * sizeof(char));
	for (int i = 0; i < length; i++)
		arr1[i] = input[i];
	return arr1;
}