#include "Single_Linked_List.h"
#include <iostream>

using namespace std;
/*
* Push_front() function add the item at the front of the list, if list is empty then
* one item of the list will represent the head and tail of the node. otherwise, the 
* entered item will establish the link with the existing nodes, and number of items 
* will be increase
*/

void Single_Linked_List::push_front(const Item_Type& item) {
	Node* node = new Node(item);
	if (head == NULL) {
		head = node;
		tail = head;
	}
	else {
		node->next = head;
		//tail = head;
		head = node;
	}
	num_items++;

}
/*
* Push_back() function add the item from the back of the list, if list is empty then
* one item of the list will represent the head and tail of the node. otherwise, the
* entered item will establish the link with the an existing nodes, and number of items
* will be increase
*/
void Single_Linked_List::push_back(const Item_Type& item) {
	Node* node = new Node(item);
	if (head == NULL) {
		head = node;
		tail = head;
	}
	else {
		tail->next = node;
		tail = node;
	}
	num_items++;
}
/*
* Pop_front() function remove an item from the from the front of the list.
*/
void Single_Linked_List::pop_front() {
	if (head->next == nullptr) {
		head = tail = nullptr;
	}else 
		head = head->next;

	num_items--;
}
/*
* Pop_back() function remove an item from the from the back of the list.
*/
void Single_Linked_List::pop_back() {
	if (head == tail) {
		head = tail = nullptr;
	}
	else {
		Node* node = head;
		while (node->next != nullptr) {
			if (node->next == tail) {
				node->next = nullptr;
				tail = node;
				break;
			}else
				node = node->next;
		}
	}
	num_items--;
}
/*
* Front() function will retreive the front / Top element from the list.
*/
void Single_Linked_List::front() {
	cout << "\nlist.front()  " << head->data.item << "\n";
}
/*
* back() function will reterive the rear / last element from the back of the list.
*/
void Single_Linked_List::back() {
	cout << "\nlist.back() " << tail->data.item << "\n";
}
/*
* empty() function is boolean function it will verfiy the list is empty or not. 
*/
bool Single_Linked_List::empty() {
	if (head == nullptr && tail == nullptr)
		return true;

	return false;
}
/*
*insert(size_t index, const Item_Type& item) function inserts an item at position 
index (starting at 0). Insert at the end if beyond the end of the list.
*/
void Single_Linked_List::insert(size_t index, const Item_Type& item) {
	bool isInserted = false;
	size_t count = 0;
	Node* node = head;
	while (node->next != nullptr) {
		if (count == index-1) {
			Node* newNode = new Node(item);
			Node* temp = node->next;
			newNode->next = temp;
			node->next = newNode;
			isInserted = true;
			
		}
		else
			node = node->next;
		count++;
	}
	if (isInserted == false) {
		push_back(item);
	}
}
/*
* bool remove(size_t index) function removes the item at position index. Return true if 
* successful; return false if index is beyond the end of the list.
*/
bool Single_Linked_List::remove(size_t index) {
	bool isRemoved = false;
	size_t count = 0;
	Node* node = head;
	while (node->next != nullptr) {
		if (count == index - 1) {
			node->next = node->next->next;
			isRemoved = true;
		}
		else
			node = node->next;
		count++;
	}
	return isRemoved;
}
/*
* Size_t find(const Item_Type& item) return the position of the first occurrence of item of it is 
* found. Return the size of the list if it is not found.
*/
size_t Single_Linked_List::find(const Item_Type& item) {
	size_t index = 0;
	Node* node = head;
	while (node->next != nullptr) {
		if (node->data.item == item.item) {
			return index;
		}
		else
			node = node->next;
		index++;
	}
	return num_items;
}

