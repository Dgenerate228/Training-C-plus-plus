#include "Lesson4.h"
using namespace std;

int Power() {

    setlocale(LC_ALL, "Russian");

    cout << "���� 4. ������� 1. ��������� ������ � ������� �� ������-�� �����" << endl;
    int n, f, z = 1;
    cout << "������� ����� ����� \n";
    cin >> n;
    cout << "������� �� ����� ������� ��������� ����� \n";
    cin >> f;
    for (pow(n, z); z <= f; z++)
    {
        cout << n << " � ������� " << z << " �����: " << pow(n, z) << endl;
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
    cout << "���� 4. ������� 2. ��������� � -do/while" << endl;
    cout << "�������� ������� ������� �� � ����������� � ���� \n";
    cout << "������� ����� ����� \n";
    cin >> n2;
    cout << "������� �� ����� ������� ��������� ����� \n";
    cin >> f2;
    z2 = 1;
    do {
        pow(n2, z2);
        cout << n2 << " � ������� " << z2 << " �����: " << pow(n2, z2) << endl;
        z2++;

    } while (z2 <= f2);
    cout << endl;
    return 0;
}

int Multiples() {

    setlocale(LC_ALL, "Russian");

    cout << "���� 4. ������� 3. ����� ������ ����� ��� - ����� ���������� ����� �������� � ���������� �������." << endl;

    int x1, x2, a, b, y = 1, z = 1;
    
    cout << "������� 1-�� �����: " << endl;
    cin >> a;
    cout << "������� 2-�� �����: " << endl;
    cin >> b;
    cout << "1 ����� = " << a << ". 2 ����� = " << b << endl;
    x1 = a % y;
    x2 = b % z;
    while (x1 == 0)
    {
        x1 = a % y;
        y++;
        cout << a << " / " << y << " = " << a / y << " .������� �� ������� = " << x1 << endl;
        cout << "���� ��� ��� 1-�� ����� = " << y << endl;
    }

    cout << endl;
    return 0;
}

int SumNumber() {
    cout << "������� ����� � �� ������ ����� ������� ��� �����" << endl;
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




