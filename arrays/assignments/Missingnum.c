// Find the Missing Integer
// Apply XOR or hashmap logic in 
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

void missingnum(int *arr, int n, int sum) {
    for(int i = 0; i<n; i++) {
        sum = sum - arr[i];
    }
    printf("The missing number is: %d", sum);
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = createarray(n-1);
    printf("The array is:-\n");
    displayArray(arr, n-1);
    int sum = n*((n+1)/2);
    missingnum(arr, n-1, sum);
    return 0;
}