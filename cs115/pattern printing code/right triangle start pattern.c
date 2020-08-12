#include <stdio.h>

int main()
{
    int i, j, n; ////i,j,n holo integer type variable
    printf("Enter value of n: "); // input value of  n from user
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*"); //print star
        }
        printf("\n"); // print n
    }

    return 0;
}
