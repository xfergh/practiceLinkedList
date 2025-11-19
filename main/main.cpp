#include <iostream>
#include "LinkedList.h"

int main() {
	LinkedList List;

	List.insert(9);
	List.insert(3);
	List.insert(6);
	List.insert(2);

	List.printList();
}