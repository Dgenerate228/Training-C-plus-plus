#include "Lesson1.h"


int Temperature()
{

    setlocale(LC_ALL, "Russian");

    int celsius;
    float fahrenheit;
    cout << "���� 1. ������� 1 - ������� �� ������� � ���������" << endl;
    cout << "������� ����������� �� �������" << endl;
    cin >> celsius;
    fahrenheit = (celsius * 1.8) + 32;
    cout << "����������� �� ���������� = " << fahrenheit << endl;
    cout << endl;

    Currency();

    return 0;
}

int Currency(){

    setlocale(LC_ALL, "Russian");

    cout << "���� 1. ������� 2. ��������� ����� �� 09.12.2022" << endl;
    float Dollar, Ruble, Euro;
    const float DollarToRuble = 62.5;
    const float DollarToEuro = 0.95;

    cout << "� ��� ���� �����-�� ���������� ��������. ������� ?: ";
    cin >> Dollar;

    Ruble = Dollar * DollarToRuble;
    Euro = Dollar * DollarToEuro;
    cout << "����� ������ � ���: " << Ruble << " ������. " << Euro << " ����." << endl;
    cout << endl;
    return 0;
}
