#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    printf("enter the name: ");
    scanf("%s",arr);

    int length= strlen(arr);
    printf("length: %d\n ",length);
    return 0;
}

