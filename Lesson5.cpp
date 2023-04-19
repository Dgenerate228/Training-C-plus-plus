// Видео 6. Урок 6 - Массивы

#include "Lesson5.h"

int PrimeNumbers()
{

    setlocale(LC_ALL, "Russian");

    cout << "Урок 5. Задание 1. Вывод простых чисел " << endl;

    const int N = 10;
    bool numberOne[N + 1];

    for (int i = 2; i < N + 1; i++)
        numberOne[i] = true;

    for (int i = 2; i< N; i++)
    {
        if (numberOne[i]);
        {
            for (int j = i * i; j <= N; j += i)
                numberOne[j] = false;
        }
    }

    for (int i = 2; i < N + 1; i++)
        if (numberOne[i])
            cout << "Простое число: " << i << endl;
    cout << endl;

    MinMaxArray();

    SortingArray();


    return 0;

}

int MinMaxArray() {
    setlocale(LC_ALL, "Russian");

    cout << "Урок 5. Задание 2. Поиск мин/макс чисел массива " << endl;

    const int x = 10;
    int max,min,j,i;
    int array[x];
    max = 0;
  
    for (i = 0; i < 10; i++) {
        cout << "Введите число в ячейку массива: " << i << ": ";
        cin >> j;
        array[i] = j;
        min = array[0];
    }

    for (i = 0; i < 10; i++) {

        if (array[i] > max)
            max = array[i];

        if (array[i] < min)
            min = array[i];
    }
    cout << "Наименьшее число в массиве = " << min << endl;
    cout << "Наибольшее число в массиве = " << max << endl;
    
    return 0;
}


int SortingArray()
{
    setlocale(LC_ALL, "Russian");

    cout << "Урок 5. Задание 3. Сортировка массива " << endl;

    const int x = 10;
    int max, min, j, i, z, y;
    int array[x];
    j = 10;
   

    //Вводим значения массива
    for (i = 0; i < 10; i++) {
        cout << "Введите число в ячейку массива: " << i << ": " << endl;
        cin >> j;
        array[i] = j;
    }
                                                                                                                                                                                                                                                                                                                                                                                                                        
    //Сортировка массива от меньшего к большему     
    for (j = 0; j<x-1; j++) {
        for (i = 0; i < x-1; i++) {
            if (array[i] > array[i + 1]) {
                z = array[i];
                y = array[i + 1];
                array[i] = y;
                array[i + 1] = z;
                cout << "Ячейка " << i << " теперь = " << y << endl;
                cout << "Ячейка " << i + 1 << " теперь = " << z << endl;
                cout << "------------------" << endl;
            }
        }
        
    }

    //Вывод массива
    for (i = 0; i < 10; i++) {
        cout << "Элемент массива: " << i << " = " << array[i] << endl;
    }

    return 0;
}


