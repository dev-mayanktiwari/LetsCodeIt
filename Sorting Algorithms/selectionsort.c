// program implementing selection sort

#include<stdio.h>
#include<math.h>

int main() {
    int n, i, j, temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<n;i++) {
        scanf ("%d", &array[i]);
    }
    for (i=0; i<n-1; i++) {
        int min=i;
        for (j=i+1; j<n; j++) {
            if (array[j]<array[min]) {
                min = j;
            }
        }
        if (min!=i) {
            int temp=array[min];
            array[min]=array[i];
            array[i]=temp;
        }
       
    }
    for (i=0; i<n; i++) {
        printf ("%d\t", array[i]);
    }
}