
#include <stdio.h>

int main()
{
    int i, j, N; ////i,j,n holo integer type variable

    printf("Enter number of rows: "); //input number of rows from user
    scanf("%d", &N);

    for(i=1; i<=N; i++){
        for(j=1; j<=N; j++)
        {
            printf("*"); //print star
        }
        printf("\n"); // new line
    }

    return 0;
}

