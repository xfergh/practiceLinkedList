#pragma once

class LinkedList {
private:
	class Node {
	public:
		int data;
		Node *next;
		Node();
	};
	Node *head;

public:
	LinkedList();
	~LinkedList();
	
	bool deleteList();
	bool insert(int data);
	void printList();
};
