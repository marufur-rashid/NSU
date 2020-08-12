#include <stdio.h>

int main()
{
    int i, j, rows; //i,j,rows holo integer type variable
    printf("Enter number of rows : "); // input rows from user
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            if(i==rows || j==1 || j==i)
            {
                printf("*"); //print star
            }
            else
            {
                printf(" "); // for print spaces
            }
        }

        printf("\n"); // new line
    }

    return 0;
}

