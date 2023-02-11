// program to print the pattern
// 3 2 1
// 2 1
// 1

// *
// **
// ***

#include<stdio.h>
#include<math.h>

int main() {
    int n, i, j;
    for (j=3; j>0; j--){
        for (i=j; i>0; i--) {
        printf("%d",i);
        }
        printf("\n");
    }
    printf("\n");
    for (i=1; i<=3; i++){
        for (j=1; j<=i; j++){
            printf("*");
        } 
        printf("\n");
    }
    
}