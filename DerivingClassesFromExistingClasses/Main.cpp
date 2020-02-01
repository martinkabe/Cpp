#include <iostream>
#include <algorithm>
#include <unordered_set>

using std::cout;
using std::endl;

void printArray(int *arr, int arrSize)
{
	for (size_t i = 0; i < arrSize; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int firstDuplicate_1(int *arr, int arrSize)
{
	size_t firstFind = arrSize;
	for (size_t i = 0; i < arrSize; i++)
	{
		for (size_t j = i + 1; j < arrSize; j++)
		{
			if (arr[i] == arr[j])
				firstFind = std::min(firstFind, j);
		}
	}
	return (firstFind == arrSize) ? -1 : arr[firstFind];
}

int firstDuplicate(int *arr, int arrSize)
{
	std::unordered_set<int> hashSet;
	std::unordered_set<int>::const_iterator iter;
	for (int i = 0; i < arrSize; i++)
	{
		iter = hashSet.find(arr[i]);
		if (iter != hashSet.end())
		{
			return arr[i];
		}
		else
		{
			hashSet.insert(arr[i]);
		}
	}
	return -1;
}

int main()
{
	int arr[]{5,2,1,1,8,5,2};
	int arrSize = sizeof(arr) / sizeof(int);
	int *p_arr = arr;

	printArray(arr, arrSize);
	int result = firstDuplicate(p_arr, arrSize);

	cout << "The first duplicate is " << result << endl;

	p_arr = nullptr;
}