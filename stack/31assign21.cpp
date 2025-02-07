/*
How do you implement a stack-based algorithm for finding the maximum element in an array?
*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int findMax(vector<int>& arr) {
    stack<int> s;

    for (int num : arr) {
        if (s.empty() || num >= s.top()) {
            s.push(num);
        }
    }

    int maxElement = s.top();

    return maxElement;
}

int main() {
    vector<int> arr = {3, 1, 5, 2, 4};

    cout << "Maximum element: " << findMax(arr) << endl;

    return 0;
}