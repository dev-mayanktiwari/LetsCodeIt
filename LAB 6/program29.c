// program for multiplication of square matrix matrix
#include<stdio.h>
#include<math.h>

int main() {
    int x, y;
    int i = 0, j = 0, r = 0;
    printf("Enter the order of square matrix\n");
    scanf("%d%d", &x, &y);
    int array1[x][y];
    int array2[x][y];
    int array3[x][y];
    printf("Enter the elements of matrix one\n");
    for (i = 0; i < x; i++) {
        printf("Enter the elements of matrix 1 row %d\t", i + 1);
        for (j = 0; j < y; j++) {
            scanf("%d", &array1[i][j]);
        }
    }   
    printf("Enter the elements of matrix two\n");
    for (i = 0; i < x; i++) {
        printf("Enter the elements of matrix 2 row %d\t", i + 1);
        for (j = 0; j < y; j++) {
            scanf("%d", &array2[i][j]);
        }
    }
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            array3[i][j] = 0;
            for (r = 0; r < y; r++) {
                array3[i][j] += array1[i][r] * array2[r][j];
            }
        }
    }
    printf("Resultant matrix\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("%d\t", array3[i][j]);
        }
        printf("\n");
    }
}
