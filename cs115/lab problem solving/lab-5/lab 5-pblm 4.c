
#include<stdio.h>
int main()
{
  int i,k,m;
  printf(" pattern is user-input:");
  scanf("%d",&m);
  for(i=1;i<=m;++i)
  {
    for(k=0;k<i;++k)
    {
     printf("*");
    }
   printf("\n");
 }
}
