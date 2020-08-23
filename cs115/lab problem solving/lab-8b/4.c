#include<stdio.h>

void show_char( int n, char a)
{
    int i;
    for (i=1;i<=n;i++)
    {
        printf("%c",a);
    }
}


int main ()
{
    int i, l, s, n=5;
    for(i=1,l=1,s=n-1;i<=n;i++,l+=2,s--)
    {
        show_char(s, ' ');
        show_char(l, '*');
        printf("\n");

    }
    return 0;
}


