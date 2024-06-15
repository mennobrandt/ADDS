#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include "Document.h"
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <utility>

class DocumentManager {
    private:
        std::unordered_map<std::string, Document> documents;
        std::unordered_map<int, std::unordered_set<int>> borrowedDocs;
        std::unordered_set<int> patrons;

    public:
        void addDocument(std::string name, int id, int license_limit);
        void addPatron(int patronID);
        int search(std::string name);
        bool borrowDocument(int docid, int patronID);
        void returnDocument(int docid, int patronID);
};

#endif