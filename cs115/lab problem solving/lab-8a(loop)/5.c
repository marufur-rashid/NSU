#include<stdio.h>

int main ()
{
    int i,j , l, s, n=4;
    for(i=1,l=1,s=n-1;i<=n;i++,l+=2,s--)
    {
         for (j=1;j<=i;j++)
        {
            printf("*");
        }

        printf(" \n");

    }
     return 0;
}


