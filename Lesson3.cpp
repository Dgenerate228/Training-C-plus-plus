#include "Lesson3.h"

int SquareRoot()
{

    setlocale(LC_ALL, "Russian");

    cout << "Задание 1. Найти корни квадратного уравнения" << endl;
    int a, b, c, Discriminant;
    float x, x2;
    cout << "a * x^2 + b * x + c = 0 \nВведите 'a': ";
    cin >> a;
    cout << "Введите 'b': ";
    cin >> b;
    cout << "Введите 'c': ";
    cin >> c;
    Discriminant = b * b - 4 * a * c;
    cout << "Дискриминант = " << Discriminant << endl;
    if (Discriminant < 0) {
        cout << "Нет действительных корней. " << endl;
        cout << endl;
    }
    else if (Discriminant == 0) {
        cout << "D = 0. " << endl;
        x = -(b / (2 * a));
        cout << "X = " << x << endl;
        cout << endl;
    }
    else {
        cout << "D > 0. Два корня. " << endl;
        x = -b + sqrt(Discriminant) / (2 * a);
        x2 = -b - sqrt(Discriminant) / (2 * a);
        cout << "X1 = " << x << endl;
        cout << "X2 = " << x << endl;
        cout << endl;
    }

    Calculator();

    return 0;
}

int Calculator()
{
    cout << "Задание 2. Калькулятор \n" << endl;
    int a, b;
    char sign;
    
    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b ;
    cout << "Введите символ  вычисления (+ | - | * | / ): ";
    cin >> sign;
    switch (sign) {
    case '+': cout << a + b << endl; break;
    case '-': cout << a - b << endl; break;
    case '*': cout << a * b << endl; break;
    case '/': cout << a / b << endl; break;

    default: cout << "Неверная операция \n";
    }

    return 0;
}
