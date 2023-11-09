/*
#include "List.h"

template <typename T>
List<T>::List() {}

template <typename T>
List<T>::List(List& _source) {
	Node* source_current = _source.root;
	while (source_current != nullptr)
	{
		push_back(source_current->value);
		source_current = source_current->next;
	}
}

template <typename T>
List<T>::~List() {
	clear();
}

template <typename T>
bool List<T>::empty() {
	return root == nullptr;
}

template <typename T>
void List<T>::push_back(T _value) {
	// Создаём новый узел с переданным значением
	Node* new_node = new Node(_value, nullptr);
	// new_node->value = _value;
	// new_node->next = nullptr;

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

template <typename T>
int List<T>::pop_front() {
	int result = root->value;
	Node* current = root;
	root = root->next;
	delete current;
	return result;
}

template <typename T>
void List<T>::print() {
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

template <typename T>
void List<T>::clear() {
	while (!empty())
		pop_front();
}

template <typename T>
unsigned int List<T>::get_length() {
	unsigned int length = 0;
	Node* current = root;
	while (current != nullptr)
	{
		length++;
		current = current->next;
	}
	return length;
}
*/