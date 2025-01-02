// Array Reverse
// Reverse the array using two-pointer technique in 
// 𝑂(𝑛)O(n).

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

void reverseArray(int *arr, int n) {

    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("The reversed array is:-\n");
    displayArray(arr, n);
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = createarray(n);
    printf("The array is:-\n");
    displayArray(arr, n);
    reverseArray(arr, n);
    return 0;
}