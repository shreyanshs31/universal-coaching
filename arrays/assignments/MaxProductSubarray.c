// Find Maximum Product Subarray
// Track max and min products.

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

void maxproductsubarray(int *arr, int n) {
    int maxsubarray = arr[0];
    for(int i = 0; i<n; i++) {
        int temp = 1;
        for(int j = i; j<n; j++) {
            temp *= arr[j];
            if(maxsubarray<temp) {
                maxsubarray = temp;
            }
        }
    }
    printf("The max sub array product is:- %d", maxsubarray);
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = createarray(n);
    printf("The array is:-\n");
    displayArray(arr, n);
    maxproductsubarray(arr, n);
    return 0;
}