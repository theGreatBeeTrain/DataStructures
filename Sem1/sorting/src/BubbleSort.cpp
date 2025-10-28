#include "..\include\BubbleSort.h"
template <typename T>
int BubbleSort(std::vector<T>& target)
{
	int l = target.size();
	T c;

	for (int i = l - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (target[j] > target[j + 1]) {
				c = target[j];
				target[j] = target[j + 1];
				target[j + 1] = c;
			};

	return 0;
}
template int BubbleSort<int>(std::vector<int>& arr);