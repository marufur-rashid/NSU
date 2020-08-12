#include <stdio.h>

int main()
{
    int i, j, rows; // i,j holo integer type variable
    int stars, spaces; // star,spaces holo integer type variable

    printf("Enter rows to print : ");
    scanf("%d", &rows); // user theke input dite hobe


    stars = 1;
    spaces = rows - 1;
    for(i=1; i<rows*2; i++) // iterate through row
    {
        for(j=1; j<=spaces; j++)
            printf(" "); // print spaces
        for(j=1; j<stars*2; j++)
            printf("*"); // print star
        printf("\n"); // move to the next line

        if(i<rows) // condition time
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    return 0;
}

