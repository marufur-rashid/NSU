#include<stdio.h>
int main ()
{
    int a[100];
    int b[100];
    int i ,j ,n;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter element: ");
     for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         printf("%d ",i);
    }

     printf("reverse order: ");
    for (i=n-1,j=0;i>=0,j<=n-1;i--,j++)
    {
        b[i] = a[j];


    }

    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }



}
