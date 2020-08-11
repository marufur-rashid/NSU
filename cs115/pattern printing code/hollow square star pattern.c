
#include <stdio.h>

int main()
{
    int i, j, N; //  i,j,n holo integer type variable
    printf("Enter number of rows: ");
    scanf("%d", &N); // input from user
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

