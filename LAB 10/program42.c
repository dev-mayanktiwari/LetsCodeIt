// program to find the greatest integer among a array of 20 elements 
// using dynamic allocation.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main() {
    int i;
    int max=-1, n=20;
    int * ptr;
    ptr = (int *) calloc(n, sizeof(int));
    for (i=0; i<n; i++) {
        printf("Enter the element %d\t", i+1);
        scanf("%d",&ptr[i]);
        if (ptr[i]>max) {
            max=ptr[i];
        }
    }
    printf("The maximum element in the array is %d\t", max);
}