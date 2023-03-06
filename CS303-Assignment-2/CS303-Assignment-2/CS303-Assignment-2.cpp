// CS303-Assignment-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Node.h"
#include "Item_Type.h"
#include "Single_Linked_List.h"
#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"

#include <iostream>

using namespace std;
void print(Single_Linked_List list) {
	cout << "\nList = ";
	Node* node = list.head;
	while (node->next != nullptr) {
		cout << node->data.item << "  ";
		node = node->next;
	}
	cout << node->data.item << "\n";
}

int main(){
	cout << "=============================================================================";
	cout << "\nAssignment-2 part 1";
	cout << "\n=============================================================================";

	cout << "\nSingle_Linked_List Program";
	Single_Linked_List list;

	Item_Type item1;
	item1.item = "Tom";
	Item_Type item2;
	item2.item = "Harry";
	Item_Type item3;
	item3.item = "Joe";
	Item_Type item4;
	item4.item = "Muchi";
	Item_Type item5;
	item5.item = "Kallo";
	Item_Type item6;
	item6.item = "Barb";

	cout << "\nlist.push_front(item1) " << item1.item;
	list.push_front(item1);
	cout << "\nlist.push_back(item3) " << item3.item;
	list.push_back(item3); // harry tom joe
	cout << "\nlist.push_back(item4) " << item4.item; 
	list.push_back(item4); // harry tom joe Muchi
	cout << "\nlist.push_back(item5) " << item5.item;
	list.push_back(item5); // harry tom joe Muchi Kallo
	cout << "\nlist.push_front(item2) " << item2.item;
	list.push_front(item2); //harry tom

	print(list);
	cout << "\n--------------------------------------------------";

	size_t index = 2;
	list.insert(index, item6); // harry tom joe Bab Muchi Kalo
	cout << "\ninsert " << item6.item << " at index 2 ";
	print(list);
	cout << "--------------------------------------------------";

	list.front();
	cout << "--------------------------------------------------";

	list.back();
	cout << "--------------------------------------------------";

	print(list);
	cout << "list.pop_front() ";
	list.pop_front();
	print(list);
	cout << "--------------------------------------------------";

	print(list);
	cout << "list.pop_back() ";
	list.pop_back();
	print(list);
	cout << "--------------------------------------------------";

	string result = "false";

	if (list.empty()) result = "true";
	cout << "\nlist.empty() = " << result;
	cout << "\n--------------------------------------------------";

	print(list);
	cout << "Find " << item3.item;
	index = list.find(item3);
	cout << "\nFound " << item3.item << " at index " << index;

	cout << "\n-------------------------------------------------- \n";

	cout << "\n=============================================================================";
	cout << "\nAssignment-2 part 2";
	cout << "\n=============================================================================";
	Professional* professional = new Professional(4000, 600, 8);
	Nonprofessional* nonprofessional = new Nonprofessional(18, 1.5, .03);
	cout << "\n\nprofessional->calculateWeeklySalary(): " << professional->calculateWeeklySalary();
	cout << "\nprofessional->calculatWeeklyHealthCareContributions(): " << professional->calculatWeeklyHealthCareContributions();
	cout << "\nprofessional->calculateWeeklyVacationDays(): " << professional->calculateWeeklyVacationDays();

	cout << "\n\nnnonprofessional->calculateWeeklySalary(): " << nonprofessional->calculateWeeklySalary();
	cout << "\nnonprofessional->calculatWeeklyHealthCareContributions(): " << nonprofessional->calculatWeeklyHealthCareContributions();
	cout << "\nnonprofessional->calculateWeeklyVacationDays(): " << nonprofessional->calculateWeeklyVacationDays();
	cout << "\n";
}
