#include<stdio.h>
int main ()
{
    int a[100];
    int i,n;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=1; i<=n ;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("odd number are: ");
    for (i=1;i<=n;i++)
    {
       if(a[i]%2==1)
       printf("%d ",a[i]);
    }
    printf("even number are: ");
      for (i=1;i<=n;i++)
    {
       if(a[i]%2==0)
       printf("%d ",a[i]);
    }
}



