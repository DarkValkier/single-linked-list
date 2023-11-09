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
	// ������ ����� ���� � ���������� ���������
	Node* new_node = new Node(_value, nullptr);
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
		Node* last = root;
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