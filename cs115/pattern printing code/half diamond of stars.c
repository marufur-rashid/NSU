#include<stdio.h>

int main()
{
    int i, j, N, columns; //i,j,n holo integer type variable

    printf("Enter number of columns:"); //number print korte hove
    scanf("%d",&N); // user theke input korte hobe

    columns=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            columns++; // increment number of colums per row for upper part
        }
        else
        {
            columns--; // decrement number of colums per row lower part
        }
        printf("\n"); // for next line
    }

    return 0;
}

