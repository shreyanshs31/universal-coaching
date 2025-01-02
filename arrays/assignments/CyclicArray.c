// Write a Program to Cyclically Rotate an Array by One Store the last element, 
//shift all other elements right, and set the first position to the stored element.

#include <stdio.h>
#include <stdlib.h>

int *createarray(int n) {
    int *array;

    array = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element in the %d postion of array\n", i);
        scanf("%d", &array[i]);
    }
    
    return array;
}

void displayArray(int *array, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void cyclicArray(int *arr, int n) {
    int last = arr[n-1];
    for (int i = n; i>=0; i--) {
        arr[i-1] = arr[i-2];
    }
    arr[0] = last;
    printf("The cyclic array is:-\n");
    displayArray(arr, n);
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = createarray(n);
    printf("The array is:-\n");
    displayArray(arr, n);
    cyclicArray(arr, n);
    return 0;
}