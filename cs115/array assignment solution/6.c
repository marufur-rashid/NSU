#include<stdio.h>
int main ()
{
    int a[5];
    int i;
    printf("enter the elements: ");
    for(i=1;i<=5;i++){
        scanf("%d",&a[i]);
    }

    int mx = a[0];
    for (i=1;i<=5;i++)
    {
        if (a[i] > mx)
            mx =a[i];
    }
    int mmx= -mx;
    for(i=1;i<=5;i++)
    {
       if (a[i]>mmx && a[i] != mx)

       mmx=a[i];
    }

     int lmx=-mmx;
     for (i=1;i<=5;i++)
     {
       if(a[i]>lmx && a[i] != mx && a[i] !=mmx)
       lmx=a[i];
     }

    printf(" first largest element: %d\n",mx);
    printf(" second largest element: %d\n",mmx);
    printf(" third largest element: %d\n",lmx);
    return 0;
}



