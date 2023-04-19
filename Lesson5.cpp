// ����� 6. ���� 6 - �������

#include "Lesson5.h"

int PrimeNumbers()
{

    setlocale(LC_ALL, "Russian");

    cout << "���� 5. ������� 1. ����� ������� ����� " << endl;

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
            cout << "������� �����: " << i << endl;
    cout << endl;

    MinMaxArray();

    SortingArray();


    return 0;

}

int MinMaxArray() {
    setlocale(LC_ALL, "Russian");

    cout << "���� 5. ������� 2. ����� ���/���� ����� ������� " << endl;

    const int x = 10;
    int max,min,j,i;
    int array[x];
    max = 0;
  
    for (i = 0; i < 10; i++) {
        cout << "������� ����� � ������ �������: " << i << ": ";
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
    cout << "���������� ����� � ������� = " << min << endl;
    cout << "���������� ����� � ������� = " << max << endl;
    
    return 0;
}


int SortingArray()
{
    setlocale(LC_ALL, "Russian");

    cout << "���� 5. ������� 3. ���������� ������� " << endl;

    const int x = 10;
    int max, min, j, i, z, y;
    int array[x];
    j = 10;
   

    //������ �������� �������
    for (i = 0; i < 10; i++) {
        cout << "������� ����� � ������ �������: " << i << ": " << endl;
        cin >> j;
        array[i] = j;
    }
                                                                                                                                                                                                                                                                                                                                                                                                                        
    //���������� ������� �� �������� � ��������     
    for (j = 0; j<x-1; j++) {
        for (i = 0; i < x-1; i++) {
            if (array[i] > array[i + 1]) {
                z = array[i];
                y = array[i + 1];
                array[i] = y;
                array[i + 1] = z;
                cout << "������ " << i << " ������ = " << y << endl;
                cout << "������ " << i + 1 << " ������ = " << z << endl;
                cout << "------------------" << endl;
            }
        }
        
    }

    //����� �������
    for (i = 0; i < 10; i++) {
        cout << "������� �������: " << i << " = " << array[i] << endl;
    }

    return 0;
}


