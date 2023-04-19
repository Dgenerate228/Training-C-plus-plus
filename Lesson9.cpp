#include "Lesson9.h"


struct Employe
{
	char name[20];
	double salary;
	int CountPasses;
};

void Input(Employe *s) 
{
	cout << "Enter name: ";
	s->name == new char[20];

	cin.get();
	cin.getline(s->name, 20);

	cout << "Enter salary: ";
	cin >> s->salary;

	cout << "Enter number of passes: ";
	cin >> s->CountPasses;
	cout << endl;

}

void Delete(const Employe *s)
{
	if (s->CountPasses > 5)
	{
		cout << "Delete employe: " << s->name << endl;
	}
}

int StructData() {

	Employe emp_1 = {"Vasya", 200, 3};
	Employe emp_2;
	Employe emp_3[1];

	emp_2.name == "Denis";
	emp_2.salary = 1000;
	emp_2.CountPasses = 2;

	emp_3[0].name == "Eugene";
	emp_3[0].salary = 500;
	emp_3[0].CountPasses = 3;



	Employe d[4];
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << " Employe: " << endl;
		Input(&d[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		Delete(&d[i]);
	}

	

	return 0;
}