#include <stdio.h>

int main()
{
    int i, j, rows; //i,j,row holo integer type variable
    printf("Enter number of rows: "); // input number of rows from user
    scanf("%d", &rows);
    for(i=1; i<=rows; i++) // iterate though row
    {
        for(j=i; j<=rows; j++)
        {
            if(i==1 || j==i || j==rows) // print star for first row(i==1) * first column (j==1) * last column (j=rows)
            {
                printf("*"); // for star
            }
            else
            {
                printf(" ");// for print spaces
            }
        }
        printf("\n"); // move to the new line
    }

    return 0;
}

