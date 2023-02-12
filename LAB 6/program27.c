//program to add diagonal elements of two matrix
#include<stdio.h>
#include<math.h>

int main() {
    int x,y;
    int i=0, j=0, sum1=0, sum2=0;
    printf("Enter the order of square matrix separated with space\n");
    scanf("%d" "%d",&x, &y);
    int array1[x][y];
    int array2[x][y];
    int array3[x][y];
    printf("Enter the elements of matrix one\n");
    for (i=0; i<x; i++){
        printf("Enter the elements of matrix 1 row %d\t",i+1);
        for(j=0; j<y; j++){
            scanf("%d", &array1[i][j]);
        }
    }   
    printf("Enter the elements of matrix two\n");
    for (i=0; i<x; i++){
        printf("Enter the elements of matrix 2 row %d\t",i+1);
        for(j=0; j<y; j++){
            scanf("%d", &array2[i][j]);
        }
    }   
    for (i=0; i<x; i++){
        for(j=0; j<y; j++){
            if(i==j){
                sum1=sum1+array1[i][j];
            }
        }
    }   
    for (i=0; i<x; i++){
        for(j=0; j<y; j++){
            if(i==j){
                sum2=sum2+array2[i][j];
            }
        }
    }   
    printf("The sum of diagonal elements of matrix 1 is %d\n",sum1);
    printf("The sum of diagonal elements of matrix 2 is %d\n", sum2);   
    printf("The sum of diagonal elements of matrix 1 and matrix 2 is %d\n", sum1+sum2);

}