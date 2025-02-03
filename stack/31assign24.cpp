/*
 How do you implement a stack-based algorithm for finding the median of an array?
*/

#include <iostream>

#include <stack>



using namespace std;



double findMedian(int arr[], int n) {

    stack<int> minStack, maxStack;

    

    if (n == 0) return -1; // Handle empty array

    

    minStack.push(arr[0]);

    double median = arr[0];



    for (int i = 1; i < n; i++) {

        if (arr[i] < median) {

            minStack.push(arr[i]);

        } else {

            maxStack.push(arr[i]);

        }



        if (minStack.size() > maxStack.size() + 1) {

            maxStack.push(minStack.top());

            minStack.pop();

        } else if (maxStack.size() > minStack.size() + 1) {

            minStack.push(maxStack.top());

            maxStack.pop();

        }



        if (n % 2 == 0) {

            median = (double)(minStack.empty() ? maxStack.top() : minStack.top() ) + (double)(maxStack.empty() ? minStack.top() : maxStack.top()) / 2;

        } else {

            median = (minStack.size() > maxStack.size()) ? minStack.top() : maxStack.top();

        }

    }



    return median;

}



int main() {

    int arr[] = {5, 2, 8, 1, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Median: " << findMedian(arr, n) << endl;

    return 0;

}
