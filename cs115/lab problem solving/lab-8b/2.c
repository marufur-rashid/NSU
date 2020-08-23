#include<stdio.h>
int compute_average(int a, int b)
{
    int average;
    average=(a+b)/2 ;
    printf(" average is : %d",average);
    return average;
}

int main()
{
    int a , b;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    compute_average(a,b) ;


    return 0;

}

