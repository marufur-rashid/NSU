#include<stdio.h>


int main()
{

   int i, a[100], n=9;

   a[1]=0; a[2]=1;
   for(i=3;i<=n;i++) {
        a[i]=a[i-1]+a[i-2];
   }
   printf("%d: %d \n", n, a[n]);
}

