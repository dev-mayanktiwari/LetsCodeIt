// program implementing insertion sort
#include<stdio.h>
#include<math.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<n;i++) {
        scanf ("%d", &array[i]);
    }
    for (i=1; i<n; i++) {
        int current = array[i];
        int j=i-1;
        while (array[j]>current && j>=0) {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;
    }
    for (i=0; i<n; i++) {
        printf ("%d\t", array[i]);
    }
}