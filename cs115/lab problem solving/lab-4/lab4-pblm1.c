#include<stdio.h>
int main ()
{
    char x ;
    int a,b;

    printf(" enter an operator\n");
    scanf(" %c",&x);
    printf("enter 1st operand\n");
    scanf("%d",&a);
    printf("enter 2nd operand\n");
    scanf("%d",&b);

    switch(x){
        case '+':
            printf("%d the result is\n",a+b);
            break;
        case '-':
            printf("%d the result is\n",a-b);
            break ;
        case '*':
            printf(" %d the result is \n",a*b);
            break ;
        case '/':
            printf("%d the result is \n",a/b);
            break;
        default:
            printf("result is unknown\n");
    }
    return 0;
}

