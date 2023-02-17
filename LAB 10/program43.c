// program to find transpose of a matrix 
// using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main() {
    int rows, columns, i;
    printf("Enter the size of the array m x n separated with space :\n");
    scanf("%d %d", &rows, &columns);
    int **matrix= (int **) malloc(rows * sizeof(int*));
    for (i=0; i < rows; i++) {
        matrix[i]= (int *) malloc(columns * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        printf("Enter elements or row %d\t", i+1);
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int** transpose = (int**) malloc(columns * sizeof(int*));
    for (int i = 0; i < columns; i++) {
        transpose[i] = (int*) malloc(rows * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    for (int i = 0; i < columns; i++) {
        free(transpose[i]);
    }
    free(transpose);

    return 0;

}

    
