// program for addition of two two-d arrays
#include<stdio.h>
#include<math.h>

int main() {
    int i, j, n;
    printf("Enter the size of square array \n");
    scanf("%d %d",&n, &n);
    int array1[n][n];
    int array2[n][n];
    int array3[n][n];
    for (i=0; i<n; i++){
        printf("Please enter the elements of array1 at row %d ", i+1);
        for (j=0; j<n; j++){
            scanf("%d",&array1[i][j]);
        }
    }   
    for (i=0; i<n; i++){
        printf("Please enter the elements of array2 at row %d ", i+1);
        for (j=0; j<n; j++){
            scanf("%d",&array2[i][j]);
        }
    }   
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            array3[i][j]=array1[i][j]+array2[i][j];
        }
    } 
    printf("The resultant array is: \n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("%d\t", array3[i][j]);
        } printf("\n");
    }  
}