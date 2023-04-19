#include "Lesson10.h"

struct node
{
	int key = 0;       // �������� id
	string name;
	node* next;    // ��������� �� ��������� ����   
	node* prev;    // ��������� �� ���������� ����
};
node* head = NULL; // ������ ����� ��������� ����
node* tail = NULL; // ������ ����� ���������� ����
node* temp = NULL; // ����� ��� ��������/����������� ������
node* actual = head; // ������ ����� �������� ����

void Init()
{
	int x = 0;
	string y;

	head = new node;              // �������� ��������� ����            
	head->key = x;                // ��������            
	head->name = "Zero value";
	head->next = NULL;            // ��� ���������� ����
	head->prev = NULL;            // ��� ����������� ����  
	actual = head;                  // ������� ����

	while (cin >> y)
	{
		if (y == "stop")
		{
			actual->next = new node;
			actual = actual->next;
			actual->key = x++;
			actual->name = "Final value";
			actual->next = NULL;
			actual->prev = tail;
			tail = actual;                   // ��������� ������� - �����
			return;
		}

		// ���� �������� ������� ����
		else {
			actual->next = new node;         // �������� ����
			actual = actual->next;           // ������� �� ���� ����
			actual->key = x++;               // �������� id
			actual->name = y;
			actual->next = NULL;             // ����� ������  
			actual->prev = tail;
			tail = actual;                   // ����� ������� ������ ��������� - �����
		}
	}
}

void PrintHead()
{
	// ������ � ������ �� ����� � ������� �����
	cout << "������ � ������ �� �����" << endl << endl;

	actual = head;
	while (actual != NULL)
	{
		cout << actual->key << ". " << actual->name << ". " << &actual << endl;
		actual = actual->next;
	}
	cout << endl << endl;
}

void PrintTail()
{
	// ������ � ����� �� ������ � ������� �����
	cout << "������ � ����� �� ������" << endl << endl;

	actual = tail;
	while (actual != NULL)
	{
		cout << actual->key << ". " << actual->name << endl;
		actual = actual->prev;
	}
	cout << endl << endl;
}

void DeleteFirst()
{
	// �������� ������� �������� ������
	cout << "�������� ������� ��������" << endl << endl;
	actual = head;
	head = head->next;
	head->prev = NULL;
	delete head->prev;
}

void DeleteLast()
{
	// �������� ���������� �������� ������
	cout << "�������� ���������� ��������" << endl << endl;
	actual = head;
	while (actual->next != NULL)
	{
		actual = actual->next;
	}

	tail = actual->prev;
	tail->next = NULL;
	delete tail->next;
}

void DeleteID()
{
	int x;
	cout << "����� ������� ������ ������� ?" << endl;
	cin >> x;

	if (x > tail->key) {
		cout << "������ ������������ id !" << endl;
		DeleteID();
	}

	else if (tail->key - x >= tail->key / 2) {
		actual = head;
		while (actual->key != x)
		{
			actual = actual->next;
		}
		cout << actual->key << endl;

		temp = actual;
		temp->prev->next = actual->next;
		temp->next->prev = actual->prev;
		actual = NULL;
		delete actual;

		actual = temp;
		while (actual->next != NULL) {
			actual = actual->next;
			actual->key = actual->key--;
		}
	}

	else if (tail->key - x < tail->key / 2) {

		actual = tail;
		while (actual->key != x)
		{
			actual = actual->prev;
		}
		cout << actual->key << endl;

		temp = actual;
		temp->prev->next = actual->next;
		temp->next->prev = actual->prev;
		actual = NULL;
		delete actual;

		actual = temp;
		while (actual->next != NULL) {
			actual = actual->next;
			actual->key = actual->key--;
		}
	}
}

void AddHead() {    //�������� � ������� head
	string x;
	cout << "������� ����� ������ ��������" << endl;
	cin >> x;

	actual = new node;      // �������� ����� �������
	actual->name = x;       // ����������� ���
	actual->key = 0;
	actual->prev = NULL;
	actual->next = head;
	actual->next->prev = actual;
	head = actual;
	actual->next = actual->next;

	while (actual->next != NULL) {
		actual = actual->next;
		actual->key = actual->key++;
	}
}

void AddTail() {
	int x = tail->key;
	string y;
	cout << "������� ����� ������ ��������" << endl;
	cin >> y;

	actual = tail;
	actual->next = new node;
	actual = actual->next;
	actual->key = x + 1;
	actual->name = y;
	actual->next = NULL;
	actual->prev = tail;
	tail = actual;
}

void AddID() {
	int x;
	string y;
	cout << "����� �� �������� ������ ����� ������� ?" << endl;
	cin >> x;

	if (x > 0 && x < tail->key) {
		actual = new node;      // �������� ����� �������
		cout << "������� ����� ������ �������� " << endl;
		cin >> y;
		actual->name = y;       // ����������� ���
		actual->key = x;

		temp = head;
		while (temp->key != x) {
			temp = temp->next;
		}

		actual->next = temp;
		actual->prev = temp->prev;

		actual->next->prev = actual;     //�������� ��� �������, �������� � ����
		actual->prev->next = actual;     //�������� ��� �������, �������� � ����

		while (actual->next != NULL) {
			actual = actual->next;
			actual->key = actual->key++;
		}
	}
	else if (x < 0)
	{
		cout << endl;
		cout << "������� �� ����� ���� ������ ���� !" << endl;
		cout << endl;
	}

	else if (x == 0)
	{
		AddHead();
	}

	else if (x > tail->key)
	{
		cout << endl;
		cout << "������� �� ����� ���� ������ ���������� �������� !" << endl;
		cout << endl;
	}

	else if (x = tail->key)
	{
		AddTail();
	}
}

int ReturnMainProgramm() {
	int x;

	PrintHead();
	cout << "1. �������� ������� � ������ ������." << endl;
	cout << "2. �������� ������� � ����� ������." << endl;
	cout << "3. �������� ������� �� id." << endl;
	cout << "4. ������� 1-�� �������." << endl;
	cout << "5. ������� ��������� �������." << endl;
	cout << "6. ������� ������� �� id." << endl;
	cout << "7. ����������� ������ � �����." << endl << endl;

	cin >> x;

	switch (x)
	{
	case 1:  AddHead(); PrintHead(); break;
	case 2:  AddTail(); PrintHead(); break;
	case 3:  AddID(); PrintHead(); break;
	case 4:  DeleteFirst(); PrintHead(); break;
	case 5:  DeleteLast(); PrintHead(); break;
	case 6:	 DeleteID(); PrintHead(); break;
	case 7:  PrintTail(); break;
	}
	return 0;
}

int SingleLinkedListHomeWork() {
	char x = 'y';
	cout << "������� ������. ������� ��������, ������� Enter ��� ���������� ��������� ��������." << endl;
	cout << "������� stop - ��� ��������� ������." << endl;

	Init();
	DeleteFirst();
	DeleteLast();
	system("cls");

	PrintHead();

	while (x == 'y')
	{
		system("cls");
		ReturnMainProgramm();
		cout << "���������� ������ ? [Y]" << endl;
		cin >> x;
	}
	return 0;
}