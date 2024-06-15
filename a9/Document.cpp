#include "Document.h"
using namespace std;

Document::Document() {
    borrowCount = 0; 
}

Document::Document(string docName, int docId, int docLim) {
    title = docName;
    id = docId;
    numAvailable = docLim;
    borrowCount = 0;
}