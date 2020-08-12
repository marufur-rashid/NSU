
#include <stdio.h>

int main()
{
    int i, j, N; //  i,j,n holo integer type variable
    printf("Enter number of rows: ");
    scanf("%d", &N); // input from user
    for(i=1; i<=N; i++) // iterate over row
    {
        for(j=1; j<=N; j++) // iterate over column
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                printf("*"); // print star
            }
            else
            {
                printf(" "); // print spacees
            }
        }
        printf("\n"); // move to the new line
    }

    return 0;
}

