#include "List.h"

List::List() {}
List::List(List& _source) {}
List::~List() {
	clear();
}

bool List::empty() {
	return root == nullptr;
}

void List::add(int _value) {
	// Создаём новый узел с переданным значением
	Node* new_node = new Node;
	new_node->value = _value;
	new_node->next = nullptr;

	// Проверяем спискок на отсутствие элементов
	if (empty()) {
		// Если элементов нет – записываем новый узел как корень списка
		root = new_node;
	}
	else
	{	
		// Если элементы есть
		// Ищем последний элемент
		Node* last = root;
		// Последним считается элемент, у которого нет ссылки
		// на следующий элемент (т.е. она равна nullptr)
		while (last->next != nullptr)
			// Если элемент не является последним, переходим к следующему
			last = last->next;
		// На выходе из while в переменной last указатель на последний элемент

		// Указываем новый узел как следующий элемент последнего узла
		last->next = new_node;
	}
}

void List::print() {
	if (root == nullptr)
		cout << "List is empty!" << endl;
	else
	{
		Node* current = root;
		while (current != nullptr)
		{
			cout << current->value << " ";
			current = current->next;
		}
		cout << endl;
	}
}

void List::clear() {
	while (!empty())
	{
		Node* current = root;
		root = root->next;
		delete current;
	}
}

unsigned int List::get_length() {
	unsigned int length = 0;
	Node* current = root;
	while (current != nullptr)
	{
		length++;
		current = current->next;
	}
	return length;
}