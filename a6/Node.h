#ifndef NODE_H
#define NODE_H

class Node {
    // private members
    int data;
    Node* link;
    public:
        int getData();
        void setData(int dataIn);
        Node* getLink();
        void setLink(Node* nodeLink);
        // Node();
        // ~Node();
};

#endif