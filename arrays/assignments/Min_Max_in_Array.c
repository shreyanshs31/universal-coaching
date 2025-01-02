//Find the Minimum and Maximum Element in an Array
// Use a linear traversal to find min and max in 
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

    for (int i = 0; i < n; i++)
    {
        printf("The element in the %d postion of array is %d\n", i, array[i]);
    }
    
    return array;
} 

void max(int *array, int n){
    int max = array[0];
    for (int i = 0; i < n; i++)
    {
        if(array[i]>max) 
        {
            max = array[i];
        }
    }
    printf("Max in the array is %d\n", max);
    
}

void min(int *array, int n) {
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        if(array[i]<min) 
        {
            min = array[i];
        }
    }
    printf("Min in the array is %d\n", min);
}

int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int *arr = createarray(n);
    min(arr, n);
    max(arr, n);
}