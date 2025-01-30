/*
Find Duplicate Element: Given an array of integers, 
find a duplicate element in the array.
*/


//only valid for 1 duplicate element
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

void duplicateElement(int size, int *ptr) {
    for(int i = 0; i<size; i++) {
        if(ptr[i] == ptr[i+1]) {
            cout<<"DuplicateElement is: "<<ptr[i];
            return;
        }
    }
    cout<<"There are no duplicates"<<endl;
}

int main(){
    int size = 5;
    int arr[5] = {3,1,9,10,8};
    int *ptr = arr;
    sortArray(size, ptr);
    duplicateElement(size, ptr);
}