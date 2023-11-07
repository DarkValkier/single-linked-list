#pragma once
#include <iostream>

using namespace std;

/*
	Node - ���� (�������) ������
		value - �������� ����
		next - ������ �� ��������� ����
*/

template<typename T> struct Node {
	T value;
	Node* next;
};

/*
	List - ����������� ������ ����� �����
		root - ��������� �� �������� ���� ������

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
	������� ����� push_front, ������� ��������� �����
	������� � ������ ������.
*/
