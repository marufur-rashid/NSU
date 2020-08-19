#include<stdio.h>
int main ()
{
    double a,b,c;
    printf("enter base: ");
    scanf("%lf", &c);
    printf("enter hypotenuse: ");
    scanf("%lf",&b);
    a = b*b - c*c;
    a=sqrt(a);
    printf("height is: %lf\n",a);
    double area=(double) 1/2*a*c;
    printf("area is %lf",area);
    return 0;
}
