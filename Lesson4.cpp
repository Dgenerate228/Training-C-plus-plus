#include "Lesson4.h"
using namespace std;

int Power() {

    setlocale(LC_ALL, "Russian");

    cout << "Урок 4. Задание 1. Возводить двойку в степень до какого-то числа" << endl;
    int n, f, z = 1;
    cout << "Введите любое число \n";
    cin >> n;
    cout << "Введите до какой степени возводить число \n";
    cin >> f;
    for (pow(n, z); z <= f; z++)
    {
        cout << n << " в степени " << z << " равна: " << pow(n, z) << endl;
    }
    cout << endl;

    PowerDoWhile();

    Multiples();

    SumNumber();

    return 0;
}

int PowerDoWhile() {

    setlocale(LC_ALL, "Russian");

    int n2, f2, z2 = 1;
    cout << "Урок 4. Задание 2. Потренить с -do/while" << endl;
    cout << "Аналогия первого задания но с изменениями в коде \n";
    cout << "Введите любое число \n";
    cin >> n2;
    cout << "Введите до какой степени возводить число \n";
    cin >> f2;
    z2 = 1;
    do {
        pow(n2, z2);
        cout << n2 << " в степени " << z2 << " равна: " << pow(n2, z2) << endl;
        z2++;

    } while (z2 <= f2);
    cout << endl;
    return 0;
}

int Multiples() {

    setlocale(LC_ALL, "Russian");

    cout << "Урок 4. Задание 3. Может сделаю может нет - найти наибольший общий делитель и наименьшее кратное." << endl;

    int x1, x2, a, b, y = 1, z = 1;
    
    cout << "Введите 1-ое число: " << endl;
    cin >> a;
    cout << "Введите 2-ое число: " << endl;
    cin >> b;
    cout << "1 число = " << a << ". 2 число = " << b << endl;
    x1 = a % y;
    x2 = b % z;
    while (x1 == 0)
    {
        x1 = a % y;
        y++;
        cout << a << " / " << y << " = " << a / y << " .Остаток от деления = " << x1 << endl;
        cout << "Наиб общ дел 1-го числа = " << y << endl;
    }

    cout << endl;
    return 0;
}

int SumNumber() {
    cout << "Введите число и мы найдем самую большую его цифру" << endl;
    int a, b, c, d, n;
    a = 0;
    cin >> n;
    while (n > 0) {
        if ((n % 10) > a)
            a = n % 10;

        n = n / 10;
        
    }
    cout << a << endl;

    return 0;

}




