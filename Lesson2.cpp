#include "Lesson2.h"

int Time()
{

    setlocale(LC_ALL, "Russian");

    cout << "���� 2. ������� 1. ������� ������ � ���,����, ������" << endl;
    int second, days, hours, minutes;
    cout << "������� ������������ ���������� ������: ";
    cin >> second;
    minutes = second / 60;
    hours = minutes / 60;
    days = hours / 24;
    cout << "� ������ ���������� ������: " << minutes << " - �����. ";
    cout << hours << " - �����. " << days << " - ����. \n";
    if (minutes == 0) {
        cout << "���������� �������: " << second << endl;
        cout << endl;
    }
    else {
        cout << "���������� �������: " << second % minutes << endl;
        cout << endl;
    }
    return 0;
}


