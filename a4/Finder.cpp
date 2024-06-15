#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;

        int startIndex = 0;

        for(size_t i = 0; i <= s2.size(); i++) {
            // search for substring of length [0,i], and starts at index startIndex
            // startIndex is updated when the right prefix is found
            size_t found = s1.find(s2.substr(0, i), startIndex);
            if (found != string::npos) {
                startIndex = found;
                result.push_back(found);
            } else {
                result.push_back(-1);
                // exit the loop if prefix hasn't been found. 
                break;
            }
        }

        for(size_t j = 0; j < s2.size(); j++) {
            result.push_back(-1);
        }

        return result;
    }

   