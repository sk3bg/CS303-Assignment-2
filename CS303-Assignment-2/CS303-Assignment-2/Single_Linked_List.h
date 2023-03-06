#pragma once
#include "Node.h"
using namespace std;

class Single_Linked_List
{
public:
	Node* head;
	Node* tail;
	int num_items;
public:
	Single_Linked_List(){
		head = nullptr;
		tail = nullptr;
		num_items = 0;
	}
	void push_front(const Item_Type& item);
	void push_back(const Item_Type& item);
	void pop_front();
	void pop_back();
	void front();
	void back();
	bool empty();

	void insert(size_t index, const Item_Type& item);
	bool remove(size_t index);
	size_t find(const Item_Type& item);

};

