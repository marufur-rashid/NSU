#include<stdio.h>
int main ()
{
    int a[5];
    int i;
    printf("enter the elements: ");
    for(i=1;i<5;i++){
        scanf("%d",&a[i]);
    }

    int mx = a[0];
    for (i=1;i<5;i++){
        if (a[i] > mx)
            mx =a[i];
    }

    int smx = -mx;
    for (i=1;i<5;i++){
        if (a[i] > smx && a[i] != mx)
            smx = a[i];
    }

    printf("largest element: %d\n",mx);
    printf("second largest element: %d\n",smx);
    return 0;
}
