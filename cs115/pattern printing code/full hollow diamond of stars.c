#include <stdio.h>

int main()
{
    int i, j, n; // i,j,n holo integer type variable

    printf("Enter value of n : ");
    scanf("%d", &n); // user theke input dite hobe
    for(i=1; i<=n; i++) // print upper half of the pattern
    {
        for(j=i; j<=n; j++)
        {
            printf("*"); // print star
        }

        for(j=1; j<=(2*i-2); j++)
        {
            printf(" "); // print spaces
        }

        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n"); // move to the next line
    }
    for(i=1; i<=n; i++) // print lower half of the pattern
    {
        for(j=1; j<=i; j++)
        {
            printf("*"); // print star
        }

        for(j=(2*i-2); j<(2*n-2); j++)
        {
            printf(" "); // print spaces
        }

        for(j=1; j<=i; j++)
        {
            printf("*"); // for print star
        }

        printf("\n");// move to the new line
    }

    return 0;
}

