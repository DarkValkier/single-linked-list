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
};

/*
	List - односвязный список целых чисел
		root - указатель на корневой узел списка

*/

template<typename T> class List
{
	Node<T>* root = nullptr;
public:
	List();
	List(List&);
	~List();

	bool empty();
	unsigned int get_length();
	void clear();
	void push_back(T);
	int pop_front();
	void print();
};

/*
	Создать метод push_front, который добавляет новый
	элемент в начало списка.
*/
