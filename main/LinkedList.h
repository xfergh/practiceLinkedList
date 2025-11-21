#pragma once

class LinkedList {
private:
	class Node {
	public:
		int data;
		Node* next;
		Node();
	};
	Node* head;

public:
	LinkedList();
	~LinkedList();

	bool deleteList();
	bool deleteHead();
	bool deleteTail();
	bool deleteNodeSearch(int data);
	bool insertHead(int data);
	bool insertTail(int data);
	void printList();
	int searchNode(int position);
};
