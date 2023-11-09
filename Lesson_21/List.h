#pragma once
#include <iostream>

using namespace std;

/*
	Node - узел (элемент) списка
		value - значение узла
		next - ссылка на следующий узел
*/

template<typename T> struct Node {
	T value;
	Node* next;

	Node() {}
	Node(T _value, Node* _next) : value(_value), next(_next) {}
};

/*
	List - односвязный список целых чисел
		root - указатель на корневой узел списка

*/

template<typename T> class List
{
	Node<T>* root = nullptr;
public:
	List() {}
	List(List& _source) {
		Node* source_current = _source.root;
		while (source_current != nullptr)
		{
			push_back(source_current->value);
			source_current = source_current->next;
		}
	}
	~List() {
		clear();
	}

	bool empty() {
		return root == nullptr;
	}

	unsigned int get_length() {
		unsigned int length = 0;
		Node<T>* current = root;
		while (current != nullptr)
		{
			length++;
			current = current->next;
		}
		return length;
	}

	void clear() {
		while (!empty())
			pop_front();
	}

	void push_back(T _value) {
		// Создаём новый узел с переданным значением
		Node<T>* new_node = new Node<T>(_value, nullptr);
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
			Node<T>* last = root;
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

	T pop_front() {
		T result = root->value;
		Node<T>* current = root;
		root = root->next;
		delete current;
		return result;
	}

	void print() {
		if (root == nullptr)
			cout << "List is empty!" << endl;
		else
		{
			Node<T>* current = root;
			while (current != nullptr)
			{
				cout << current->value << " ";
				current = current->next;
			}
			cout << endl;
		}
	}
};

/*
	Создать метод push_front, который добавляет новый
	элемент в начало списка.
*/
