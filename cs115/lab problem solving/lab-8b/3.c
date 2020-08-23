#include<stdio.h>
double get_area(int a,int b,int h)
{
     double area=(double) 1/2*(a+b)*h ;
    printf("Area of trapezoid : %2.lf",area);
    return area ;
}

int main ()
{
    int a,b,h;
    printf( "Enter a: " );
    scanf("%d",&a);
    printf( "Enter b: " );
    scanf("%d",&b);
    printf( "Enter h: " );
    scanf("%d",&h);

    get_area( a, b, h);
    return 0;


}

