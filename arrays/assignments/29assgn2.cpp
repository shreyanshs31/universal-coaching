//Find Maximum Element: Given an array of integers, 
//find the maximum element.

#include <bits/stdc++.h>
using namespace std;

void maximumNum(int size, int *ptr) {
    int maxi = 0;
    for(int i = 1; i<size; i++) {
        if(ptr[i]>ptr[maxi]) {
            maxi = ptr[i];
        }
        else {
            continue;
        }
    }
    cout<<"maximum number is: "<<ptr[maxi]<<endl;
}

int main() {
    int size = 5;
    int arr[size]= {1, 3, 9, 6, 8};
    int *ptr = arr;
    maximumNum(size, ptr);
    return 0;
}