/*
How do you implement a stack-based algorithm for finding the minimum element in an array?
*/
#include <iostream>
#include <stack>
using namespace std;

int findMinInArray(int arr[], int n) {
    stack<int> s;

    for (int i = 0; i < n; i++) {

        if (s.empty() || arr[i]<=s.top()) {

            s.push(arr[i]);
        }
    }
    int minValue = s.top();

    return minValue; // The top element of minStack is the minimum
}



int main() {

    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minimum = findMinInArray(arr, n);
    cout << "Minimum element in the array: " << minimum << endl;
    return 0;

}
