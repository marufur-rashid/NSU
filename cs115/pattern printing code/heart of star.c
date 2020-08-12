#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n; // i,j,n holo integer type variable
    char name[50]; // charecter type variable
    int len; // int type len

    printf("Enter your name: "); // jekono nam deyar jonno
    gets(name);

    printf("Enter value of n : ");
    scanf("%d", &n); // 'n' er input user theke dite hobe

    len = strlen(name);

    // Print upper part of the heart shape
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*"); // print star
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" "); // print space
        }

        for(j=1; j<=i; j++)
        {
            printf("*"); // print star
        }

        printf("\n");// move to the new line
    }

    // Prints lower triangular part of the pattern
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" "); // for spaces
        }

        // Print the name
        if(i == n)
        {
            for(j=1; j<=(n * 2-len)/2; j++)
            {
                printf("*");
            }

            printf("%s", name);

            for(j=1; j<(n*2-len)/2; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1; j<=(i*2)-1; j++)
            {
                printf("*");
            }
        }

        printf("\n"); // move to the new line
    }

    return 0;
}

