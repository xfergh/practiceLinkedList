#include <iostream>
#include "LinkedList.h"

LinkedList::Node::Node() : data(0), next(nullptr) {}

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
	deleteList();
}

bool LinkedList::deleteList() {
	if (!head) { return false; }

	Node* temp = head;

	while (temp) {
		Node* nextNode = temp->next;
		delete temp;
		temp = nextNode;
	}
	
	head = nullptr;
	std::cout << "List succesfully deleted!" << std::endl;
	return true;
}

bool LinkedList::insert(int newData) {
	Node* newNode = new(std::nothrow) Node();
	
	if (!newNode) {
		std::cout << "No hay memoria suficiente." << std::endl;
		return false;
	}

	newNode->data = newData;

	newNode->next = head;	
	head = newNode;
	return true;
}

void LinkedList::printList() {
	if (!head) { std::cout << "This list is empty" << std::endl; }
	
	Node* temp = head;

	while (temp) {
		std::cout << temp->data << " ";
		temp = temp->next;
	}

	std::cout << std::endl;
}