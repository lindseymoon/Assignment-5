//////////////
//
//CS172--Assignment #5
//EX05_04
//Exercise 12.20: Shuffle_Vector
//
//////////////

#include <iostream>

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

template<typename T>
void shuffle(vector<T> &v);

int main()
{
    int i, a;
    vector <int> v;
    cout << "Please enter 10 integers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    
    shuffle(v);
    cout << "Shuffled integers are: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

template<typename T>
void shuffle(vector<T>& v)
{
	srand(time(0));
	for (int i = 0; i < v.size(); i++)
	{
		int index = rand() % v.size();
			T temp = v[index];
			v[index] = v[i];
			v[i] = temp;
	}

}