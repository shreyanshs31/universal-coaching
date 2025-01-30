/*
 Find Missing Element: Given an array of integers and a range of numbers, 
 find a missing element in the range.
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

void missingElement(int size, int *ptr) {
    for(int i = 0; i<size-1; i++) {
        if(ptr[i]+1!=ptr[i+1]) {
            cout<<"The missing element is: "<<ptr[i]+1<<endl;
            return;
        }
    }
    cout<<"There is no missing element"<<endl;
}

int main(){
    int size = 5;
    int arr[5] = {3,1,2,4,6};
    int *ptr = arr;
    sortArray(size, ptr);
    missingElement(size, ptr);
}