//////////////
//
//CS172--Assignment #5
//EX05_02
//Exercise 12.4: Is_Sorted
//
//////////////

/*
12.4
Write the following function to check if the elements in the array are sorted.

template<typename T>
bool isSorted(const T list[], int size)

Test the function with array of int, double, and string values.
*/

#include <iostream>
#include <string>

using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (list[i] > list[i + 1])
		{
			return false;
		}
	}
	return true;
}

template<typename T>
void printArray(const T list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}

void sorted()
{
	int list1[] = { 1, 2, 3, 4, 5, 6, 7 };
	isSorted(list1, 7);
	printArray(list1, 7);
	if (isSorted(list1, 7))
	{
		cout << "The list is sorted" << endl;
	}
	else
	{
		cout << "The list is not sorted" << endl;
	}

	double list2[] = { 2.1, 54.7, 0.3, 1.2, 0.7, 3.8, 0.5 };
	isSorted(list2, 7);
	printArray(list2, 7);
	if (isSorted(list2, 7))
	{
		cout << "The list is sorted" << endl;
	}
	else
	{
		cout << "The list is not sorted" << endl;
	}

	string list3[] = { "Yellow","Purple","Pink","Red", "Blue", "Green", "Orange" };
	isSorted(list3, 7);
	printArray(list3, 7);
	if (isSorted(list3, 7))
	{
		cout << "The list is sorted" << endl;
	}
	else
	{
		cout << "The list is not sorted" << endl;
	}
}

int main()
{
	sorted();
}