#include<stdio.h>
int main ( )
{
    double  a,b,c,d,e;
    printf( "enter 5 numbers:" );
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    double average;
    average=(a+b+c+d+e)/5;
    printf("%lf\n",(a+b+c+d+e)/5);
    return 0;
}
