#include <stdio.h>
#include<stdlib.h>

int main ()
{
    int *data;
    int j, n;
    scanf("%d",&n);
    data=(int*)malloc(n*sizeof(int));
    for(j=0;j<n;j++)
    {
        scanf("%d",data+j);
    }
    free(data);
    return 0;
}
