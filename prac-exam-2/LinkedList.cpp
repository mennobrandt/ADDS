#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////
// Traverse function:
Node* LinkedList::traverse(unsigned int index) {
	unsigned int position = 0; // indexed from [0, n-1]
	Node* currNode = head;
	while((currNode != nullptr) && (position < index)) {
		currNode = currNode->link;
		position++;
	}

	return currNode;
}

//    bool swap(int pos1, int pos2) - swaps the data at positions pos1 and pos2 then returns true. [12 marks]
//    If a or b are out-of-bounds, return false without swapping any elements.
bool LinkedList::swap(int pos1, int pos2) {
	Node* node1 = traverse(pos1);
	Node* node2 = traverse(pos2);

	// if indexes are out of bounds
	if(node1 == nullptr || node2 == nullptr) {
		return false;
	}

	int tempData = node2->data;
	node2->data = node1->data;
	node1->data = tempData;

	return true;
}

// bool find_and_delete(int target) - searches the list for a node containing target, which then deletes it and returns true. [9 marks]
//     If target appears multiple times in the list, delete the first occurrence.
//     If target does not exist in the list return false.
bool LinkedList::find_and_delete(int target) {
	if(head == nullptr) {
		return false;
	}

	if(head->data == target) {
		Node* toDelete = head;
		head = head->link;
		delete toDelete;
		return true;
	}

	Node* currentNode = head->link;
	Node* previousNode = head;
	while((currentNode != nullptr) && (currentNode->data != target)) {
		previousNode = currentNode;
		currentNode = currentNode->link;
	}

	if(currentNode == nullptr) {
		return false; // target not found in list
	}

	previousNode->link = currentNode->link;
	delete currentNode;
	return true;
}