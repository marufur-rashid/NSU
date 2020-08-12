#include <stdio.h>

int main()
{
    int i, j, rows; // i,j,n holo integer type variable
    printf("Enter number of rows : "); // input number of rows from user
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=rows; j++)
        {
            printf("*"); // print star
        }
        printf("\n"); // new line
    }

    return 0;
}
