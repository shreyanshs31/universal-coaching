/*
Rotate Array: Given an array of integers and a rotation factor, 
rotate the array by the factor.
*/

#include <bits/stdc++.h>
using namespace std;

void rotateArray(int size, int *ptr, int factor) {
    for(int j = 0; j<factor; j++) {
        int temp = ptr[0];
        for(int i = 1; i<size; i++) {
            ptr[i-1] = ptr[i];
        }
        ptr[size-1] = temp;
    } 
}

void display(int size, int *ptr) {
    for(int i = 0; i<size; i++) {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int size = 5;
    int arr[5] = {3,1,2,4,6};
    int *ptr = arr;
    int factor;
    cout<<"How many times you want to rotate the array: ";
    cin>>factor;
    rotateArray(size, ptr, factor);
    display(size, ptr);
}