#include <iostream>
#include <string>

using namespace std;

template<typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

void Search()
{
	//int
	int list1[] = { 3,5,4,1,0 };
	if (linearSearch(list1, 1, 5) == -1)
		cout << "No match" << endl;
	else
		cout << "Match" << endl;

	//double
	double list2[] = { 2.5,.1,9.8,4.2 };
	if (linearSearch(list2, 2.5, 4) == -1)
		cout << "No match" << endl;
	else
		cout << "Match" << endl;

	//string
	string list3[] = { "red", "orange", "yellow", "green" };
	if (linearSearch(list3, string("purple"), 4) == -1)
		cout << "No match" << endl;
	else
		cout << "Match" << endl;
}