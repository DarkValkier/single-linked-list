#pragma once
#include <iostream>

using namespace std;

/*
	Node - узел (элемент) списка
		value - значение узла
		next - ссылка на следующий узел
*/

struct Node {
	int value;
	Node* next;
};

/*
	List - односвязный список целых чисел
		root - указатель на корневой узел списка

*/

class List
{
	Node* root = nullptr;
public:
	List();
	List(List&);
	~List();

	bool empty();
	unsigned int get_length();
	void clear();
	void push_back(int);
	void print();
};

