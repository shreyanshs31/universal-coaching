/*
3. Sort Array: Given an array of integers, sort the array in ascending 
order.
*/

#include <bits/stdc++.h>
using namespace std;

void sortArray(int size, int *ptr) {
    for(int i = 0; i<size; i++) {
        for(int j = 1; j<size-i; j++) {
            if(ptr[j]<ptr[j-1]) {
                int temp = ptr[j];
                ptr[j] = ptr[j-1];
                ptr[j-1] = temp;
            }
        }
    }
}

void display(int size, int *ptr) {
    for(int i= 0; i<size; i++) {
        cout<<ptr[i]<<" ";
    }   
    cout<<endl;
}

int main() {
    int size = 5;
    int arr[5] = {3,1,9,6,8};
    int *ptr = arr;
    sortArray(size, ptr);
    display(size, ptr);
}