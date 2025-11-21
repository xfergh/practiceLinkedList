#include <iostream>
#include "LinkedList.h"

int main() {
	LinkedList List;

	List.insertHead(9);
	List.insertHead(3);
	List.insertHead(6);
	List.insertHead(2);

	List.printList();
	List.deleteHead();
	List.printList();
	List.insertTail(1);
	List.printList();
	int thirdNode = List.searchNode(3);
	std::cout << thirdNode << std::endl;
}