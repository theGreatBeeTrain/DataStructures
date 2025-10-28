#pragma once
#include <vector>
#include <iostream>

// uniArray v1
// "for all my array needs!"

template <typename T>
// Checks if vector array is invalid or already sorted
int checkArray(std::vector<T> arr) {

	int s = arr.size() - 1;
	if (s < 1)
		return -1;

	for (int i = 0; i < s; i++)
		if (arr[i] > arr[i + 1])
			return 0;

	return -2;
}
template <typename T>
// Checks if dynamic array is invalid or already sorted
int checkArray(T* arr, int size) {

	if (size < 2)
		return -1;

	size++;
	for (int i = 0; i < size; i++)
		if (arr[i] > arr[i + 1])
			return 0;

	return -2;
}

template <typename T>
// Converts vector array to dynamic array, returns size
int VectorToArr(std::vector<T> arr1, T* arr2)
{
	int size = arr1.size();
	free(arr2);
	arr2 = (T*)malloc(size * sizeof(T));
	for (int i = 0; i < size; i++)
		arr2[i] = arr1[i];
	return size;
}
template <typename T>
// Converts dynamic array to vector array
void ArrToVector(T* arr1, int size, std::vector<T>& arr2)
{
	for (int i = 0; i < size; i++)
		arr2[i] = arr1[i];
}

template <typename T>
// Prints out vector array
void printArray(std::vector<T> arr)
{
	int size = arr.size();
	std::cout << arr[0];
	for (int i = 1; i < size; i++)
		std::cout << ' ' << arr[i];
	std::cout << std::endl;
}
template <typename T>
// Prints out dynamic array
void printArray(T* arr, int size)
{
	std::cout << arr[0];
	for (int i = 1; i < size; i++)
		std::cout << ' ' << arr[i];
	std::cout << std::endl;
}
