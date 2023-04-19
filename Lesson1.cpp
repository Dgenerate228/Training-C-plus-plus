#include "Lesson1.h"


int Temperature()
{

    setlocale(LC_ALL, "Russian");

    int celsius;
    float fahrenheit;
    cout << "Урок 1. Задание 1 - Перевод из Цельсия в Фаренгейт" << endl;
    cout << "Введите температуру по Цельсию" << endl;
    cin >> celsius;
    fahrenheit = (celsius * 1.8) + 32;
    cout << "Температура по Фаренгейту = " << fahrenheit << endl;
    cout << endl;

    Currency();

    return 0;
}

int Currency(){

    setlocale(LC_ALL, "Russian");

    cout << "Урок 1. Задание 2. Конвертер валют на 09.12.2022" << endl;
    float Dollar, Ruble, Euro;
    const float DollarToRuble = 62.5;
    const float DollarToEuro = 0.95;

    cout << "У вас есть какое-то количество долларов. Сколько ?: ";
    cin >> Dollar;

    Ruble = Dollar * DollarToRuble;
    Euro = Dollar * DollarToEuro;
    cout << "После обмена у вас: " << Ruble << " Рублей. " << Euro << " Евро." << endl;
    cout << endl;
    return 0;
}
