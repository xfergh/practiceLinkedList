#include <iostream>
#include "LinkedList.h"

LinkedList::Node::Node() : data(0), next(nullptr) {}

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
	deleteList();
}

bool LinkedList::deleteList() {
	
}

bool LinkedList::insert(int newData) {
	Node* newNode = new(std::nothrow) Node();
	newNode->data = newData;

	newNode->next = head;
	
	head = newNode;
}

void LinkedList::printList() {
	if (!head) { std::cout << "This list is empty" << std::endl; }

}