// program to read numbers from one file and prints its square to another file
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    FILE *file1, *file2;
    int i;
    file1=fopen("numbers.txt","r");
    file2=fopen("squares.txt","w");
    while(fscanf(file1, "%d", &i)==1) {
        fprintf(file2, "%d\n", i*i);
    }
    fclose(file1);
    fclose(file2);
}