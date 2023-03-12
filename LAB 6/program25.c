// program to delete duplicate elements of array and display it
#include<stdio.h>
#include<math.h>

int main() {
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int array[size];
    int i,j, k;
    printf("Enter the elements of the array separated with spaces \n");
    for (i=0; i<size; i++) {
        scanf("%d", &array[i]);
    }
    printf("Checking for duplicated elements.....\n");
    for (i=0; i<size; i++){
        for (j=i+1; j<size; j++){
            if (array[i]==array[j]){
                // printf("Duplicate element found, removing it\n");
                for (k=j; k<size-1; k++){
                    array[k]=array[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("The final array is \n");
    for (i=0; i<size; i++){
        printf("%d\t",array[i]);
    }
}