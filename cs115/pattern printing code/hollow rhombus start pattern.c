#include <stdio.h>

int main()
{
    int i, j, rows; // i,j,row holo integer type variable
    printf("Enter rows : "); // input number from user
    scanf("%d", &rows);


    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++) //   /* Print trailing spaces */
        {
            printf(" ");
        }
        for(j=1; j<=rows; j++) // /* Print stars and center spaces */
        {
            if(i==1 || i==rows || j==1 || j==rows)
                printf("*"); // print star
            else
                printf(" "); // print spaces
        }

        printf("\n"); // move to the new line
    }

    return 0;
}
