#include "Lesson6.h"

int LongLine()
{
	setlocale(LC_ALL, "Russian");
	char str1[80];

	cout << "������� ������ �� ���������� � �� ������ ���-�� ����: ";
	cin.ignore(); //����� ��� ������ getline �� ��������
	cin.getline(str1,80);

	cout << "������ 1: \"" << str1 << "\"\n";

	int numberWords = 0;
	bool inWord = false;

	for (int i(0); str1[i] != '\0'; i++)
	{
		if (isalpha(str1[i]) && !(inWord))
		{
			numberWords++;
			inWord = true;
		}
		if (!isalpha(str1[i]))
			inWord = false;

	}

	cout << numberWords << endl;


	return 0;
}