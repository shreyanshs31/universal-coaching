/*
 Search Element in Array: Given an array of integers and a target 
 element, search for the element in the array.
*/
#include <bits/stdc++.h>
using namespace std;

int searchNum(int size, int *ptr, int target) {
    for(int i = 0; i<size; i++) {
        if(ptr[i] == target) {
            cout<<"The number is in the array"<<endl;
            return 1;
        }
    }
    return -1;
}

int main() {
    int size = 5;
    int arr[size]= {1, 3, 9, 6, 8}; // {1, 3, 6, 8 , 10}
    int *ptr = arr;
    int target;
    cout<<"Enter the number to find in the array: ";
    cin>>target;
    int result = searchNum(size, ptr, target);
    if(result == -1) {
        cout<<"The number is not in the array"<<endl;
    }
    return 0;
}