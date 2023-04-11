// write a program to perform the linear searching. 
// the size of array and the arrays element are input through the keyboard
#include<stdio.h>
#include<math.h>

int main() {
    int n, i, key;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array separated with spaces\n");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the element to search \n");
    scanf("%d",&key);
    for (i=0; i<n; i++){
        if (array[i]==key){
            printf("Element found at index %d ", i);
        }
    }
       
}