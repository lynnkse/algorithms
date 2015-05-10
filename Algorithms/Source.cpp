#include<iostream>

//c_for_each algorithm
template<typename T, typename Function>
void c_for_each(T array[], int size, Function f)
{
	for (int i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

// reverse algorithm
template<typename T>
void c_reverse(T array[], int size)
{
	T* buffer = new T[size];
	for (int i = 0; i < size; i++)
	{
		buffer[i] = array[i];
	}
	for (int i = 0; i < size; i++)
	{
		array[i] = buffer[size -1 - i];
	}
	delete[] buffer;
}

// sort algorithm
template<typename T>
void c_sort(T array[], int size)
{
	T buffer;
	bool swap = false;
	while (true)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				buffer = array[i];
				array[i] = array[i + 1];
				array[i + 1] = buffer;
				swap = true;
				break;
			}
			swap = false;
		}
		if (swap == false)
			return;
	}
}

//print functor
template<typename T>
class Print
{
public:
	void operator()(T r)
	{
		std::cout << r << std::endl;
	}
};

//main 
int main()
{
	int a[5] = { 3, 7, 12, 4, 50 };
	Print<int> p;
	c_sort(a, 5);
	c_for_each(a, 5, p);
}