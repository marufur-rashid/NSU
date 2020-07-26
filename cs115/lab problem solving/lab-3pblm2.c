#include<stdio.h>
int main ()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if ( n %7==0){
    printf("%d is  a multiple 7\n",n);}
    else{
        printf("%d is not a multiple 7\n",n);
    }
    return 0;
}
