#include <stdio.h>

int main()
{
    int i, j, N; //  i,j,n holo integer type variable
    printf("Enter number of rows: "); // user input
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            /*
* Prints star for, first row (i==1) or last row (i==N) or first column (j==1) or last column (j==N) or row equal to column (i==j) or column equal to N-row (j==N-i+1)
             */
            if(i==1 || i==N || j==1 || j==N || i==j || j==(N - i + 1))
            {
                printf("*");// for print star
            }
            else
            {
                printf(" "); // print spaces
            }
        }
        printf("\n"); // move to the new line
    }

    return 0;
}

