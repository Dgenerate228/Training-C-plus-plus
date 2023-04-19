#include "Lesson8.h"

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int ArgumentFunction()
{
	int a = 12, b = 13;

	cout << "a = " << a << ", b = " << b << endl;
	Swap(a, b);
	cout << "Передали значения из аргументов другой функции." << endl;
	cout << "a = " << a << ", b = " << b << endl;

	return 0;

}