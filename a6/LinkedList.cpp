#include "LinkedList.h"

LinkedList::LinkedList() {
    // empty linkedList
    head = nullptr;
    return;
}

LinkedList::LinkedList(int* array, int len) {
    // if len is 0
    if(len < 1) {
        head = nullptr;
        return;
    }
    
    // set first node (head)
    head = new Node();
    head->setData(array[0]);
    Node* curr = head; // current

    // construct rest of linked list. Use rest of array
    for(int i = 1; i < len; i++) {
        Node* n = new Node();
        n->setData(array[i]);
        curr->setLink(n);
        curr = n;
    }
}

LinkedList::~LinkedList() {
    // loop thru and delete nodes
    Node* curr = head;
    while (head != nullptr) {
        curr = head;
        head = head->getLink();
        delete curr;
    }
}

Node* LinkedList::traverse(int target) {
    if (target < 0) {  // Return the last node
        Node* curr = head;
        while (curr && curr->getLink()) {
            curr = curr->getLink();
        }
        return curr;
    }

    int i = 1;
    Node* curr = head;
    while((curr != nullptr) && (i < target)) {
        curr = curr->getLink();
        i++;
    }
    return curr;
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* insertedNode = new Node();
    insertedNode->setData(newNum);

    if (!head) {  // Insert at the beginning
        head = insertedNode;
        return;
    }

    if(pos <= 1) {
        insertedNode->setLink(head);
        head = insertedNode;
        return;
    }

    Node* prevNode = traverse(pos - 1);
    if (prevNode) {
        insertedNode->setLink(prevNode->getLink());
        prevNode->setLink(insertedNode);
    } else {
        prevNode = traverse(-1);
        prevNode->setLink(insertedNode);
    }
}

bool LinkedList::deletePosition(int pos) {
    if (!head || pos < 1) {
        return false;
    }

    // deleting head
    if (pos == 1) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
        return true;
    }

    Node* curr = head;
    Node* prev = nullptr;
    int i = 1;

    while (curr) {
        if (i == pos) {
            prev->setLink(curr->getLink());
            delete curr;
            return true;
        }

        prev = curr;
        curr = curr->getLink();
        i++;
    }
    return false;
}

int LinkedList::get(int pos) {
    Node* target = traverse(pos);
    if(target) { // if target exists
        return (target->getData());
    } else {
        return std::numeric_limits<int>::max();
    }
}

int LinkedList::search(int target) {
    int i = 1;
    Node* curr = head;
	while(curr != nullptr) {
        if(curr->getData() == target) {
            return i; // return index if found
        }
        curr = curr->getLink();
        i++;
	}

    return -1; 
}

void LinkedList::printList() {
    if(!head) {
        return;
    }

	Node* curr = head;
    std::cout << "[";
	while(curr != nullptr) {
        std::cout << curr->getData();
        curr = curr->getLink();

        if (curr != nullptr) {
            std::cout << " ";
        }
	}
    std::cout << "]" << std::endl;
	return;
}