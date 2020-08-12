#include <stdio.h>

int main()
{
    int i, j, rows; // i,j,row holo integer type variable


    printf("Enter number of rows : "); // user input
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) // for condition
    {
        for(j=i; j<rows; j++) // print spaces
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) // hollow pyramid
        {
            if(i==rows || j==1 || j==(2*i-1)) // * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1))
            {
                printf("*"); // print star
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
