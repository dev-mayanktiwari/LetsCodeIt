// program to compare two dates 
#include<stdio.h>
#include<math.h>

struct date {
    int day;
    int month;
    int year;
} d1, d2;

int main() {
    printf("Enter date one in format of dd mm yyyy \n");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    printf("Enter date two in format of dd mm yyyy \n");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);
    if (d1.day==d2.day && d1.month==d2.month && d1.year==d2.year){
        printf("The dates are equal.");
    }
    else {
        printf("The dates are not equal.");
    }
    
}