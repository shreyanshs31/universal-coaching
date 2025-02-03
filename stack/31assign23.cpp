/*
How do you implement a stack-based algorithm for sorting an array?
*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void sortStack(stack<int>& inputStack) {
    stack<int> tempStack;

    while (!inputStack.empty()) {
        int temp = inputStack.top();
        inputStack.pop();

        while (!tempStack.empty() && tempStack.top() < temp) {
            inputStack.push(tempStack.top());
            tempStack.pop();
        }

        tempStack.push(temp);
    }

    while (!tempStack.empty()) {
        inputStack.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    vector<int> arr = {34, 3, 31, 98, 92, 23};
    stack<int> inputStack;

    // Push array elements into the stack
    for (int num : arr) {
        inputStack.push(num);
    }

    sortStack(inputStack);

    // Print sorted elements
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }

    return 0;
}

