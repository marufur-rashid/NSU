#include<stdio.h>
int main ()
{
    int a[5];
    int i;
    int max= a[0];
    printf("enter the elements: ");
    for(i=1;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (i=1;i<5;i++){
        if ( a[i]> max)
            max =a[i];
    }
    printf("largest element: %d\n",max);
    return 0;
}
