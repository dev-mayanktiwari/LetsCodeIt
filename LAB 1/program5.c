// program to check eligiblity of the course
#include<stdio.h>
#include<math.h>

int main() {
    int phy, chm, math;
    printf("Enter marks of Physics, Chemistry and Mathematics separated with spaces\n");
    scanf("%d" "%d" "%d", &phy, &chm, &math);
    if ((phy>40 && chm>50 && math>60 && (phy+math)>150)) {
        printf("You are eligible for course");
    }
    else if ((phy+chm+math)>200) {
        printf("You are eligible for the course");
    }
    else {
        printf("Your are not eligible for the course");
    }
}