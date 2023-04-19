// Пропустил в курсе первые два видео. Поэтому Lesson1 это - Видео 3 на курсе.
// Урок 7. Указатели. 
// Урок 8. Define, typedef, enum, rand(), Битовые операции. 
// Урок 9. Функции.
// Данные уроки просмотрены, но более подробный разбор их пропущен.

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include "HeaderTitle.h"
#include "Lesson1.h"
#include "Lesson2.h"
#include "Lesson3.h"
#include "Lesson4.h"
#include "Lesson5.h"
#include "Lesson6.h"
#include "Lesson7.h"
#include "Lesson8.h"
#include "Lesson9.h"
#include "Lesson10.h"


using namespace std;

int main()
{

    int headerTitle = HeaderTitle();

    int x;
    cin >> x;
    if (x <= 0 || x > 10) {
        cout << "Нет такого урока ! \n";
        
    }
    else {
        switch (x)
        {
        case 1: system("cls"); Temperature(); break;
        case 2: system("cls"); Time(); break;
        case 3: system("cls"); SquareRoot(); break;
        case 4: system("cls"); Power(); break;
        case 5: system("cls"); PrimeNumbers();  break;
        case 6: system("cls"); LongLine(); break;
        case 7: system("cls"); TicTacToe(); break;
        case 8: system("cls"); ArgumentFunction(); break;
        case 9: system("cls"); StructData(); break;
        case 10: system("cls"); SingleLinkedListHomeWork(); break;

        }
    }
    
    
    
}