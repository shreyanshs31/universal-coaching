/*Find Minimum Element: Given an array of integers, find the minimum 
element.*/

#include <bits/stdc++.h>
using namespace std;

void minimumNum(int size, int *ptr) {
    int mini = 0;
    for(int i = 1; i<size; i++) {
        if(ptr[i]<ptr[mini]) {
            mini = ptr[i];
        }
        else {
            continue;
        }
    }
    cout<<"minimum number is: "<<ptr[mini]<<endl;
}

int main() {
    int size = 5;
    int arr[size]= {1, 3, 9, 6, 8};
    int *ptr = arr;
    minimumNum(size, ptr);
    return 0;
}