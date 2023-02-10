// net salary problem basic salary =(bs+da+hra)
#include<stdio.h>
#include<math.h>

int main() {
    float base, da, hra, gross, pf, net;
    printf("Please input the basic salary amount\n");
    scanf("%f",&base);
    da = 0.25*base;
    hra = 0.15*base;
    gross = (base+da+hra);
    printf("Your gross salary is %f \n",gross);
    pf = 0.1*gross;
    net=gross-pf;
    printf("Your net salary is %f",net);
}