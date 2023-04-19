#include "Lesson2.h"

int Time()
{

    setlocale(LC_ALL, "Russian");

    cout << "Урок 2. Задание 1. Перевод секунд в дни,часы, минуты" << endl;
    int second, days, hours, minutes;
    cout << "Введите интересующее количество секунд: ";
    cin >> second;
    minutes = second / 60;
    hours = minutes / 60;
    days = hours / 24;
    cout << "В данном количестве секунд: " << minutes << " - минут. ";
    cout << hours << " - часов. " << days << " - дней. \n";
    if (minutes == 0) {
        cout << "Оставшиеся секунды: " << second << endl;
        cout << endl;
    }
    else {
        cout << "Оставшиеся секунды: " << second % minutes << endl;
        cout << endl;
    }
    return 0;
}


