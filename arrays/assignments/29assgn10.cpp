/*
Find Maximum Subarray Sum: Given an array of integers, 
find the maximum sum of a subarray.*/

#include <bits/stdc++.h>
using namespace std;

int maximumNum(int l, int k) {
    if(l>k) {
        return l;
    }
    else{
        return k;
    }
}


void maxSubArray(int size, int *ptr) {
    int maxSub = INT_MIN;
    for(int i = 0; i<size; i++) {
        int sum = 0;
        for(int j = i; j<size; j++) {
            sum += j;
            if(maxSub<sum) {
                maxSub = maximumNum(sum, maxSub);
            }
        }
    }
    cout<<maxSub<<endl;
}

int main() {
    int size = 9;
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int *ptr = arr;
    maxSubArray(size, ptr);
}