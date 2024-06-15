#include "DocumentManager.h"
//#include <iostream>

using namespace std;

void DocumentManager::addDocument(string name, int id, int license_limit) {
    documents.emplace(name, Document(name, id, license_limit));
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(string name) {
    unordered_map<string, Document>::iterator i = documents.find(name);
    if(i != documents.end()) {
        return (i->second.id);
    }

    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if(patrons.find(patronID) == patrons.end()) {
        return false; 
    }

    for(auto& item : documents) {
        Document& chosenDoc = item.second;
        if(chosenDoc.id == docid) {
            if(chosenDoc.numAvailable > chosenDoc.borrowCount) {
                if(borrowedDocs[docid].find(patronID) != borrowedDocs[docid].end()) {
                    return false; 
                }
                chosenDoc.borrowCount++;
                borrowedDocs[docid].insert(patronID);
                return true;
            } else {
                return false; 
            }
        }
    }
    return false; 
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if(patrons.find(patronID) == patrons.end()) {
        return; // patron doesnt exist
    } else if (borrowedDocs[docid].find(patronID) == borrowedDocs[docid].end()) {
        return;
    }

    Document* chosenDoc = nullptr;
    for(auto& k : documents) {
        if(k.second.id == docid) {
            chosenDoc = &k.second;
            break;
        }
    }
    if(chosenDoc != nullptr) {
        if((chosenDoc->borrowCount) > 0) {
            chosenDoc->borrowCount = (chosenDoc->borrowCount) - 1; 
            borrowedDocs[docid].erase(patronID);
        }
    }

}