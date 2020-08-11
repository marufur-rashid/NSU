#include <stdio.h>

int main()
{
    int i, j, N; //  i,j,n holo integer type variable
    printf("Enter number of rows: "); // input number of rows from user
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<i; j++) // spaces print
        {
            printf(" ");
        }
        for(j=1; j<=N; j++) // print hollow rhombus
        {
            if(i==1 || i==N  || j==1|| j==N)
                printf("*"); // print star
            else
                printf(" "); // rpint spaces
        }

        printf("\n"); // new line
    }

    return 0;
}

