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
	// ������ ����� ���� � ���������� ���������
	Node* new_node = new Node;
	new_node->value = _value;
	new_node->next = nullptr;

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