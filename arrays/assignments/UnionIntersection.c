// Find the Union and Intersection of Two Sorted Arrays
// Use merge or two-pointer techniques.

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

void unionarr(int *firstarr, int *secarr, int *finalarr,int k, int n, int j) {
    int p1 = 0;
    int p2 = 0;
    for(int i = 0; i<k; i++) {
        if(p1>n-1){
            finalarr[i] = secarr[p2];
            p2++;
        }
        else if(p2 > j-1) {
            finalarr[i] = firstarr[p1];
            p1++;
        }
        else if(firstarr[p1] < secarr[p2]) {
            finalarr[i] = firstarr[p1];
            p1++;
        }
        else {
            finalarr[i] = secarr[p2];
            p2++;
        }
    }
    printf("The union array is:-\n");
    displayArray(finalarr, k);
}

void intersectionarr(int *firstarr, int *secarr, int *finalarr,int k, int n, int j) {
    int count = 0;
    for(int i = 0;i<n;i++) {
        for(int l = 0; l<j; l++) {
            if (firstarr[i] == secarr[l]) {
                finalarr[count] = firstarr[i];
                count++;
            }
        }
    }
    printf("The common elements are:-\n");
    for(int o = 0; o<k; o++) {
        if(finalarr[o] == 0) {
            continue;
        }
        else{
            printf("%d ", finalarr[o]);
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the first array\n");
    scanf("%d", &n);
    int *firstarr = createarray(n);

    int j;
    printf("Enter the size of the second array\n");
    scanf("%d", &j);
    int *secarr = createarray(j);

    printf("The First array is:-\n");
    displayArray(firstarr, n);
    printf("The Second array is:-\n");
    displayArray(secarr, n);

    int z;
    int k = n + j;
    int *finalarr;
    finalarr = (int*)calloc(k,sizeof(int));
    printf("Enter 1 if you want Union of the arrays \n Enter 2 if you want Intersection of the arrays:-\n");
    scanf("%d", &z);
    if (z == 1) {
        unionarr(firstarr, secarr, finalarr,k, n, j);
    }
    else if (z == 2) {
        intersectionarr(firstarr, secarr, finalarr,k, n, j);
    }
    else{
        printf("You have entered the wrong number:-\n");
    }
    return 0;
}