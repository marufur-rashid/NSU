#include<stdio.h>
int main ()
{
    int a[100];
    int i,j ,n;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0; i<n ;i++)
    {
        scanf("%d",&a[i]);
    }



    for(j = 0; j < n; j++)
    {
        for (i=0;i<n;i++)
        {
            if(a[i]==  a[j] && i != j)
            {
                printf("%d %d\n",i, j);
            }

        }
    }

}

