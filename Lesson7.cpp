#include "Lesson7.h"
#include "conio.h"
#include "random"
#include "time.h"


char name1[30];
char name2[30];
char table[3][3]; //2-������ ������. ������ ������������ �������
bool step;



//��������� ����
void instruction() {
	setlocale(LC_ALL, "Russian");

	cout << "\t\t*** ��������-������ ***\n\n";
	cout << "������� \n";
	cout << "������ 2 ������ �� ���� 3�3\n";
	cout << "��������� ���, ��� �������� ���������� ����������\n";
	cout << "��� ����: \n\n";

	int l = 0;
	char ascii = 49; // 49 � ASCII ��� 1 � �.�.

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "| " << l + 1 << " ";
			table[i][j] = char(ascii + l); // ���� ������ char �������� ������ ������
			l++;

		}
		cout << '|';
		cout << endl;
	}	
}

bool input() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "| " << table[i][j] << ' ';
		}
		cout << '|';
		cout << endl;
	}
	cout << endl;

	if (step)
		cout << "Step - X " << name1 << " : ";
	else cout << "Step - O " << name2 << " : ";

	int n;
	cin >> n;
	if (n < 1 || n> 9)
		return false;
	int i, j;

	//�������� �� ����� 3/6/9
	if (n % 3 == 0)
	{
		i = n / 3 - 1;
		j = 2;
	}

	else
	{
		j = n % 3 - 1;
		i = n / 3;
	}

	//���� ��� ����� � ��� � �� ���� �� ������
	if (table[i][j] == 'O' || table[i][j] == 'X')
		return false;

	if (step)
	{
		table[i][j] = 'X';
		step = false;
	}
	else { table[i][j] = 'O'; step = true; }
	return true;
}

//������� ������
bool win() 
{

	for (int i = 0; i < 3; i++)
		// ������ �� �����������
		if ((table[i][0] == table[i][1]) && (table[i][0] == table[i][2])) 
			return false;

		//���������
		else
			if ((table[0][i] == table[1][i]) && (table[0][i] == table[2][i])) 
				return false;

		//��� ���������
			else if
				((table[0][0] == table[1][1] && table[0][0] == table[2][2]) 
				|| (table[0][2] == table[1][1] && table[0][2] == table[2][0]))
				return false;
}

int TicTacToe() {

	instruction();
	cin.ignore();
	cout << "Enter player 1 name - ";

	cin.getline(name1, 30);
	cout << "Enter player 2 name - ";
	cin.getline(name2, 30);


	srand(time(NULL));

	// ������� ��������� �� 1. ������� ������� ������� ������� �� 2.
	//�������� �������� �������� ����� �� ��, ��� ����� ������
	if (rand() & 1)

		step = true;
	else step = false;

	while (win()) // �������� ������ � !win() � return true � ����� �������
	{
		system("cls");
		if (!input())
		{
			cout << "Incorrect. Again!";

		}
	}

	system("cls");
	if (step)
		cout << "Winner " << name2 << endl;
	else cout << "Winner " << name1 << endl;

	return 0;
}