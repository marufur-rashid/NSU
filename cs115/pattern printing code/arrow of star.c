#include <stdio.h>

int main()
{
    int i, j, n; // i,j,n holo integer type variable
    printf("Enter value of n : ");
    scanf("%d", &n); // 'n' er man input user kekorta hobe
    for(i=1; i<n; i++) // print the upper part of arrow
    {
        for(j=1; j<=(2*i-2); j++)
        {
            printf(" "); // for spaces
        }
        for(j=i; j<=n; j++) //
        {
            printf("*");
        }

        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(2*n - 2*i); j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

