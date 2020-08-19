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


    printf("largest element: %d\n",mx);
    return 0;
}

