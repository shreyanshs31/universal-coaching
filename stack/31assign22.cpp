/*
How do you implement a stack-based algorithm for finding the minimum element in an array?
*/
#include <iostream>
#include <stack>
#include <limits.h>



using namespace std;



int findMinInArray(int arr[], int n) {

    stack<int> mainStack;

    stack<int> minStack;

    

    int minVal = INT_MAX;



    for (int i = 0; i < n; i++) {

        if (minStack.empty() || arr[i] <= minVal) {

            minStack.push(arr[i]);

            minVal = arr[i];

        }

        mainStack.push(arr[i]);

    }



    return minStack.top(); // The top element of minStack is the minimum

}



int main() {

    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};

    int n = sizeof(arr) / sizeof(arr[0]);



    int minimum = findMinInArray(arr, n);

    cout << "Minimum element in the array: " << minimum << endl;



    return 0;

}
