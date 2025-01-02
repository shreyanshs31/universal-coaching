// Wave Array
// Sort the array and swap adjacent elements for wave form.

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

void makeWave(int *arr, int n) {
    for(int i = 1; i<n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[i+2];
        arr[i+2] = temp;
    }
    printf("The wave array is:-\n");
    displayArray(arr, n);
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = createarray(n);
    printf("The array is:-\n");
    displayArray(arr, n);
    makeWave(arr, n);
    return 0;
}