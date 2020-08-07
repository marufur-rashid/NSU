#include<stdio.h>
int main()
{
  int i,j,n;
  printf("pattern is user-input:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
{
  for(j=i;j<n;j++)
{
  printf("*");
}
  printf("\n");
 }
}


