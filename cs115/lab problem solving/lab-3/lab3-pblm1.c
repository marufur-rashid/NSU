#include<stdio.h>
int main ()
{
    double x;
    printf("enter a number");
    scanf("%lf",&x);
    if (x>0){
        printf("number is positive\n");
    }
    else if (x<0){
        printf("number is negative\n");
    }
    return 0;
}
