#ifndef VECTOR_H_
#define VECTOR_H_

template<typename T>
class Vector
{
private:
	T elements[100];
	int Size;
public:
	Vector()
	{
		Size = 0;
	}

	T push_back(T value)//appends the element in this vector
	{
		elements[Size++] = value;
		return value;
	}

	T pop_back(T value) //removes the last element from this vector
	{
		elements[Size--] = value;
		return value;
	}

	unsigned const int size() //returns the number of elements in this vector
	{
		return Size;
	}
	const bool empty() //returns true if this vector is empty
	{
		return Size = 0;
	}
	T at(int index) //returns the element at the specified index in this vector
	{
		return elements[index];
	}
	void clear() //removes all elements from this vector
	{
		Size = 0;
		return Size;
	}
	void swap(Vector v2) //swaps the contents of this vector with the specified vector
	{
		T temp[100];
		int tempSize = v2.size();
		for (int i = 0; i < v2.size(); i++)
		{
			temp[i] = v2.at9(i);
		}
		v2.clear();
		for (int i = 0; i < size(); i++)
		{
			v2.push_back(at(i));
		}
		clear();
		for (int i = 0; i <tempSize; i++)
		{
			push_back(temp[i]);
		}
	}
};

#endif