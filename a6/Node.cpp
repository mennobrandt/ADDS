#include "Node.h"

// Node::Node() {
//     link = nullptr;
//     data = 0;
// }

// Node::~Node() {
//     // 
// }

int Node::getData() {
    return data;
}

void Node::setData(int dataIn) {
    data = dataIn;
}

Node* Node::getLink() {
    return link;
}

void Node::setLink(Node* nodeLink) {
    link = nodeLink;
}