#pragma once
#include "Item_Type.h"
using namespace std;

class Node
{
	public:
		Item_Type data;
		Node* next;

	public:
		Node(Item_Type item) {
			data = item;
			next = nullptr;
		}
};

