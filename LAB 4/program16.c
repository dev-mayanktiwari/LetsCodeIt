// area of rectangle using function
#include<stdio.h>
#include<math.h>

int area(int x, int y) {
    int area=x*y;
    return area;
}
int main() {
    int a,b,c;
    printf("Please enter the length and breadth of the rectangle separated with spaces\n");
    scanf("%d" "%d" , &a, &b);
    c=area(a,b);
    printf("%d",c);
}