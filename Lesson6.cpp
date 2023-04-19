#include "Lesson6.h"

int LongLine()
{
	setlocale(LC_ALL, "Russian");
	char str1[80];

	cout << "Введите строку на английском и мы узнаем кол-во слов: ";
	cin.ignore(); //убрав эту строку getline не работает
	cin.getline(str1,80);

	cout << "Строка 1: \"" << str1 << "\"\n";

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