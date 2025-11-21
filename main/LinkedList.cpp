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
	return true;
}

bool LinkedList::deleteHead() {
	if (!head) { return false; }

	Node* temp = head;
	head = head->next;
	delete temp;

	return true;
}

bool LinkedList::deleteTail() {
	if (!head) { return false; }

	Node* temp = head;
	while (temp->next->next != nullptr) {
		temp = temp->next;
	} 

	delete temp->next;
	temp->next = nullptr;
	return true;
}

bool LinkedList::deleteNodeSearch(int data) {
	if (!head) { return false; }

	Node* temp = head;

	if (temp->data == data) {
		head = nullptr;
		delete temp;
		return true;
	}

	while (temp->next && temp->data != data) {
		temp = temp->next;
	}


	
}

bool LinkedList::insertHead(int newData) {
	Node* newNode = new(std::nothrow) Node();
	
	if (!newNode) {
		return false;
	}

	newNode->data = newData;

	newNode->next = head;	
	head = newNode;
	return true;
}

bool LinkedList::insertTail(int newData) {
	
	if (!head) {
		insertHead(newData);
		return true;
	}

	Node* newNode = new(std::nothrow) Node();

	if (!newNode) { return false; }

	newNode->data = newData;
	newNode->next = nullptr;

	Node* temp = head;
	while(temp->next){
		temp = temp->next;
	}

	temp->next = newNode;
	return true;
}

void LinkedList::printList() {
	if (!head) { return; }
	
	Node* temp = head;
	while (temp) {
		std::cout << temp->data << " ";
		temp = temp->next;
	}

	std::cout << std::endl;
}

int LinkedList::searchNode(int position) {
	if (!head) { return 0; }

	Node* temp = head;
	for (unsigned int i = 0; i < position - 1; i++) {
		temp = temp->next;
	}

	return temp->data;
}