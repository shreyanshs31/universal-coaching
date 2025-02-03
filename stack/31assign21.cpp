/*
How do you implement a stack-based algorithm for finding the maximum element in an array?
*/

#include <iostream>
#include <stack>
#include <vector>
#include <limits.h>

using namespace std;

int findMax(vector<int>& arr) {
    stack<int> s;
    int maxElement = INT_MIN;

    for (int num : arr) {
        if (s.empty() || num > s.top()) {
            s.push(num);
        } else {
            s.push(s.top()); // Duplicate the top element if the current element is not greater
        }
    }

    while (!s.empty()) {
        maxElement = max(maxElement, s.top());
        s.pop();
    }

    return maxElement;
}

int main() {
    vector<int> arr = {3, 1, 5, 2, 4};

    cout << "Maximum element: " << findMax(arr) << endl;

    return 0;
}