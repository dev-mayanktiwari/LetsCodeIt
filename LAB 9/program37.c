// Write a c program to copy & 
// count the character content of one file says a.txt to another file b.txt.
#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char c;
    int count = 0;

    file1 = fopen("a.txt", "r");
    file2 = fopen("b.txt", "w");

    if (file1 == NULL || file2 == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    while ((c = fgetc(file1)) != EOF) {
        fputc(c, file2);
        count++;
    }

    fclose(file1);
    fclose(file2);

    printf("File copied successfully. Total characters copied: %d\n", count);

}
