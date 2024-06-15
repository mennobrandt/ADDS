#include <queue> 
#include <vector>
using namespace std;

int kth_largest(vector<int> values, int k) {
    priority_queue<int, vector<int>, greater<int>> heap;

    for(int i = 0; i < values.size(); i++) {
        int currVal = values[i];
        heap.push(currVal);

        if(heap.size() > k) {
            heap.pop();
        }
    }

    return heap.top();
}