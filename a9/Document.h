#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>

class Document {
    public: 
        Document();
        Document(std::string docName, int docId, int docLim);
        std::string title;
        int id;
        int numAvailable; 
        int borrowCount;
};

#endif