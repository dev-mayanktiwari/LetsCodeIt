// program implementing Bubble sort

#include<stdio.h>
#include<math.h>

#define ORDER 20

int main() {
    int a, i, j, temp;
    int array[ORDER];
    printf("Please enter the length of the array");
    scanf("%d",&a);
    printf("Enter the elements of the array separated with spaces \t");
    for (i=0; i<a; i++) {
        scanf("%d",&array[i]);
    }
    for (i=0; i<a; i++) {
        for (j=0; j<a-1; j++ ) {
            if (array[j]>array[j+1]) {
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("The sorted array is: \n");
    for (i=0; i<a; i++ ) {
        printf("%d\t", array[i]);
    }
}