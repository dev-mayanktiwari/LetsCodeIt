// program to find transpose of matrix and symmetricity or not
#include<stdio.h>
#include<math.h>
#define MAX_ROWS 10
#define MAX_COLS 10

void findTranspose(int original[][MAX_COLS], int transpose[][MAX_ROWS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = original[i][j];
        }
    }
}

int isSymmetric(int original[][MAX_COLS], int transpose[][MAX_ROWS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (original[i][j] != transpose[i][j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int original[MAX_ROWS][MAX_COLS], transpose[MAX_ROWS][MAX_COLS];
    int i, j, rows, cols, symmetric;

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &rows, &cols);

    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &original[i][j]);
        }
    }

    findTranspose(original, transpose, rows, cols);

    symmetric = isSymmetric(original, transpose, rows, cols);

    if (symmetric) {
        printf("The matrix is symmetric\n");
    } else {
        printf("The matrix is not symmetric\n");
    }

    printf("The transpose of the matrix is: \n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
