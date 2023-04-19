#include "Lesson10.h"

struct node
{
	int key = 0;       // значение id
	string name;
	node* next;    // указатель на следующий узел   
	node* prev;    // указатель на предыдущий узел
};
node* head = NULL; // хранит адрес головного узла
node* tail = NULL; // хранит адрес хвостового узла
node* temp = NULL; // адрес под хранение/копирование данных
node* actual = head; // хранит адрес текущего узла

void Init()
{
	int x = 0;
	string y;

	head = new node;              // создание головного узла            
	head->key = x;                // значение            
	head->name = "Zero value";
	head->next = NULL;            // нет следующего узла
	head->prev = NULL;            // нет предыдущего узла  
	actual = head;                  // текущий узел

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
			tail = actual;                   // Последний элемент - хвост
			return;
		}

		// если головной элемент есть
		else {
			actual->next = new node;         // создание узла
			actual = actual->next;           // переход на этот узел
			actual->key = x++;               // значение id
			actual->name = y;
			actual->next = NULL;             // конец списка  
			actual->prev = tail;
			tail = actual;                   // Новый элемент теперь последний - хвост
		}
	}
}

void PrintHead()
{
	// печать с начала до конца с помощью цикла
	cout << "Печать с начала до конца" << endl << endl;

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
	// печать с конца до начала с помощью цикла
	cout << "Печать с конца до начала" << endl << endl;

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
	// Удаление первого элемента списка
	cout << "Удаление первого элемента" << endl << endl;
	actual = head;
	head = head->next;
	head->prev = NULL;
	delete head->prev;
}

void DeleteLast()
{
	// Удаление последнего элемента списка
	cout << "Удаление последнего элемента" << endl << endl;
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
	cout << "Какой элемент хотите удалить ?" << endl;
	cin >> x;

	if (x > tail->key) {
		cout << "Введен неправильный id !" << endl;
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

void AddHead() {    //проблемы с выводом head
	string x;
	cout << "Введите текст нового элемента" << endl;
	cin >> x;

	actual = new node;      // создание новой заметки
	actual->name = x;       // прописываем имя
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
	cout << "Введите текст нового элемента" << endl;
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
	cout << "Каким по значению должен стать элемент ?" << endl;
	cin >> x;

	if (x > 0 && x < tail->key) {
		actual = new node;      // создание новой заметки
		cout << "Введите текст нового элемента " << endl;
		cin >> y;
		actual->name = y;       // прописываем имя
		actual->key = x;

		temp = head;
		while (temp->key != x) {
			temp = temp->next;
		}

		actual->next = temp;
		actual->prev = temp->prev;

		actual->next->prev = actual;     //выглядит как костыль, уточнить у вовы
		actual->prev->next = actual;     //выглядит как костыль, уточнить у вовы

		while (actual->next != NULL) {
			actual = actual->next;
			actual->key = actual->key++;
		}
	}
	else if (x < 0)
	{
		cout << endl;
		cout << "Элемент не может быть меньше нуля !" << endl;
		cout << endl;
	}

	else if (x == 0)
	{
		AddHead();
	}

	else if (x > tail->key)
	{
		cout << endl;
		cout << "Элемент не может быть больше последнего значения !" << endl;
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
	cout << "1. Добавить элемент в начало списка." << endl;
	cout << "2. Добавить элемент в конец списка." << endl;
	cout << "3. Добавить элемент по id." << endl;
	cout << "4. Удалить 1-ый элемент." << endl;
	cout << "5. Удалить последний элемент." << endl;
	cout << "6. Удалить элемент по id." << endl;
	cout << "7. Распечатать список с конца." << endl << endl;

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
	cout << "Создаем список. Впишите значение, нажмите Enter для добавления следющего элемента." << endl;
	cout << "Впишите stop - для окончания списка." << endl;

	Init();
	DeleteFirst();
	DeleteLast();
	system("cls");

	PrintHead();

	while (x == 'y')
	{
		system("cls");
		ReturnMainProgramm();
		cout << "Продолжить работу ? [Y]" << endl;
		cin >> x;
	}
	return 0;
}