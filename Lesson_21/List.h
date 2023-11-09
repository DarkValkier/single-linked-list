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

	Node() {}
	Node(T _value, Node* _next) : value(_value), next(_next) {}
};

/*
	List - ����������� ������ ����� �����
		root - ��������� �� �������� ���� ������

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
		// ������ ����� ���� � ���������� ���������
		Node<T>* new_node = new Node<T>(_value, nullptr);
		// new_node->value = _value;
		// new_node->next = nullptr;

		// ��������� ������� �� ���������� ���������
		if (empty()) {
			// ���� ��������� ��� � ���������� ����� ���� ��� ������ ������
			root = new_node;
		}
		else
		{
			// ���� �������� ����
			// ���� ��������� �������
			Node<T>* last = root;
			// ��������� ��������� �������, � �������� ��� ������
			// �� ��������� ������� (�.�. ��� ����� nullptr)
			while (last->next != nullptr)
				// ���� ������� �� �������� ���������, ��������� � ����������
				last = last->next;
			// �� ������ �� while � ���������� last ��������� �� ��������� �������

			// ��������� ����� ���� ��� ��������� ������� ���������� ����
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
	������� ����� push_front, ������� ��������� �����
	������� � ������ ������.
*/
