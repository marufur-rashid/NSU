#include<stdio.h>

void show_odd(int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }

    }
}


void show_even(int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);

        }
    }
}


int main()
{

    int i, j, n=6;
    for (i=1;i<=n;i++)
    {
        if(i%2 == 0) {
            show_even(i);
        }
        else {
            show_odd(i);
        }

        printf("\n");
    }
}

