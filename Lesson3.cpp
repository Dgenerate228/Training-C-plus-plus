#include "Lesson3.h"

int SquareRoot()
{

    setlocale(LC_ALL, "Russian");

    cout << "������� 1. ����� ����� ����������� ���������" << endl;
    int a, b, c, Discriminant;
    float x, x2;
    cout << "a * x^2 + b * x + c = 0 \n������� 'a': ";
    cin >> a;
    cout << "������� 'b': ";
    cin >> b;
    cout << "������� 'c': ";
    cin >> c;
    Discriminant = b * b - 4 * a * c;
    cout << "������������ = " << Discriminant << endl;
    if (Discriminant < 0) {
        cout << "��� �������������� ������. " << endl;
        cout << endl;
    }
    else if (Discriminant == 0) {
        cout << "D = 0. " << endl;
        x = -(b / (2 * a));
        cout << "X = " << x << endl;
        cout << endl;
    }
    else {
        cout << "D > 0. ��� �����. " << endl;
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
    cout << "������� 2. ����������� \n" << endl;
    int a, b;
    char sign;
    
    cout << "������� ������ �����: ";
    cin >> a;

    cout << "������� ������ �����: ";
    cin >> b ;
    cout << "������� ������  ���������� (+ | - | * | / ): ";
    cin >> sign;
    switch (sign) {
    case '+': cout << a + b << endl; break;
    case '-': cout << a - b << endl; break;
    case '*': cout << a * b << endl; break;
    case '/': cout << a / b << endl; break;

    default: cout << "�������� �������� \n";
    }

    return 0;
}
