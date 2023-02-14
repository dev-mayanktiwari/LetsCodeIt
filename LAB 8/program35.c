#include <stdio.h>
#include <string.h>

typedef struct hotel {
    char name[50];
    char address[50];
    char grade[5];
    int room_charge;
    int no_of_rooms;
} hot;

int main() {
    int n, i, j;
    char ch[10];
    hot temp;
    printf("Enter the total number of hotels:\n");
    scanf("%d", &n);
    hot array[n];
    printf("Enter the details of the hotel separated with spaces in the specific order:\n");
    for (i = 0; i < n; i++) {
        scanf("%s %s %s %d %d", array[i].name, array[i].address, array[i].grade, &array[i].room_charge, &array[i].no_of_rooms);
    }
    printf("Enter the grade of hotel for which you want to search for:\n");
    scanf("%s", ch);
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(array[i].grade, ch) == 0 && strcmp(array[j].grade, ch) == 0 && array[i].room_charge > array[j].room_charge) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Sorted list of hotels as per your entered grade:\n");
    for (i = 0; i < n; i++) {
        if (strcmp(array[i].grade, ch) == 0) {
            printf("%s\t %s\t %s\t %d\t %d\n", array[i].name, array[i].address, array[i].grade, array[i].room_charge, array[i].no_of_rooms);
        }
    }
}
