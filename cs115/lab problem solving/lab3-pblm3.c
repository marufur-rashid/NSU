#include<stdio.h>
int main ()
{
    int n;
    printf("enter a num");
    scanf("%d",&n);

    if (n %2 == 0){
        printf("num is even\n");
    }
    else {
        printf("num is odd\n");
    }
    return 0;
}

