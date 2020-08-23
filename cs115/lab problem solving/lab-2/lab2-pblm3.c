#include<stdio.h>
int main( )
{
    double r;

    printf("Enter the radius: ");
    scanf("%lf", &r);
    double area =3.1416*r*r;
    printf("area of the circle: %.2lf\n",area);
    double p;
    p =2*3.1416*r;
    printf ("perimeter of circle: %.2lf\n",p);
    return 0;


}

