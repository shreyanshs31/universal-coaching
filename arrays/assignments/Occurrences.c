// Find the Occurrence of an Integer in the Array
// Count occurrences using a hashmap or linear traversal.

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

void occurrence(int *arr, int n, int num) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(num == arr[i]){
            count++;
        }
    }
    if(count == 0) {
        printf("Array does not contain %d\n", num);
    }
    else {
        printf("The occurrence of %d is %d\n", num , count);
    }
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = createarray(n);
    printf("The array is:-\n");
    displayArray(arr, n);
    int num;
    printf("Enter the number you want to find:\n");
    scanf("%d", &num);
    occurrence(arr, n, num);
    return 0;
}