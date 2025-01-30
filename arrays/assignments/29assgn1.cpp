//Reverse Array: Given an array of integers, reverse the array.
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int size, int *ptr) {
    int s = 0;
    int e = size-1;
    while(s<e) {
        int temp = ptr[s];
        ptr[s] = ptr[e];
        ptr[e] = temp;
        s++;
        e--;
    }
}

void display(int size, int *ptr) {
    for(int i = 0; i<size; i++) {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int size = 5;
    int arr[size]= {1, 3, 5, 6, 8};
    int *ptr = arr;
    reverseArray(size, ptr);
    display(size, ptr);
    return 0;
}