// Find the Factorial of a Large Number
// Use an array to store digits and multiply iteratively.


#include <stdio.h>
#include <stdlib.h>

int *createarray(int n) {
    int *array;

    array = (int*) malloc(n*sizeof(int));

    for (int i = 0; i<n; i++)
    {
        array[i] = i+1;
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

int factorial(int *arr, int n) {
    int ans = 1;
    for(int i = 0; i< n; i++) {
        ans = ans*arr[i];
    }
    return ans;
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = createarray(n);
    printf("The array is:-\n");
    displayArray(arr, n);
    int ans = factorial(arr, n);
    printf("Factorial is %d", ans);
    return 0;
}