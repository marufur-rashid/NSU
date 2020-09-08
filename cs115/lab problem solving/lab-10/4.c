#include <stdio.h>
#include <string.h>
int main()
{
   char a[100];

   printf("Enter string\n");
   scanf("%s",a);

   strrev(a);

   printf("Reverse order: %s\n", a);

   return 0;
}

