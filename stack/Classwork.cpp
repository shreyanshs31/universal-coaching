#include <iostream>
using namespace std;

int* push(int *arr, int size) {
    return arr;
}
int main() {
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    int *arr = new int[size];
    int *x = push(arr, size);
    return 0;
}
