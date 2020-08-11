#include <stdio.h>

int main()
{
    int i, j, N;
    int star, spaces;
    printf("Enter number of columns : "); // input number of colums from user
    scanf("%d", &N);


    spaces = N-1;
    star = 1;
    for(i=1; i<N*2; i++)
    {
        for(j=1; j<=spaces; j++)
            printf(" "); // for spaces
        for(j=1; j<=star; j++)
            printf("*"); // for print star
        printf("\n"); // move to the new line

        if(i < N)
        {
            star++; //increment number
            spaces--; // decrement number
        }
        else
        {
            star--;
            spaces++;
        }
    }

    return 0;
}
