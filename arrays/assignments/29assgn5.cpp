/*
Find Pair with Given Sum: Given an array of integers and a target sum, 
find a pair of elements that add up to the target sum*/

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

bool searchPair(int size, int *ptr, int target) {
    int s = 0;
    int e = size-1;
    while(s<e) {
        int sum = ptr[s] + ptr[e];
        if(sum == target) {
            cout<<"The target pair are: "<<ptr[s]<<" "<<ptr[e]<<endl;
            return true;
        }
        else if (sum < target){
            s++;
        }
        else {
            e--;
        }
    }
    return false;
}

int main() {
    int size = 5;
    int arr[size]= {1, 3, 11, 6, 10};
    int *ptr = arr;
    int target;
    cout<<"Enter the sum to find in the array: ";
    cin>>target;
    sortArray(size, ptr);
    bool result = searchPair(size, ptr, target);
    if(!result) {
        cout<<"The target pair is not in the array"<<endl;
    }
    return 0;
}