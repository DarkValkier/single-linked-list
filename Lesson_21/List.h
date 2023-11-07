#pragma once
#include <iostream>

using namespace std;

/*
	Node - ���� (�������) ������
		value - �������� ����
		next - ������ �� ��������� ����
*/

struct Node {
	int value;
	Node* next;
};

/*
	List - ����������� ������ ����� �����
		root - ��������� �� �������� ���� ������

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

