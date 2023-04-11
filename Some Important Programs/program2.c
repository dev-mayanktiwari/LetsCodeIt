// program to find maximum element in an array
#include<stdio.h>
#include<math.h>

int main() {
    int i, n;
    int max=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array separated with spaces\n");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    for (i=0; i<n; i++){
        if (array[i]>max)
            max=array[i];
    }
    printf("The maximum element of the array is %d ", max);
}