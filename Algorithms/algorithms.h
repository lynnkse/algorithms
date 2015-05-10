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

//print functor
//template<typename T>
class Print
{
public:
	void operator()(int r)
	{
		std::cout << r << std::endl;
	}
};

//main sdfsdfsd
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	Print p;
	c_for_each(a, 5, p);
}