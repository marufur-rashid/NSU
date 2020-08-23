
#include<stdio.h>
void find_area(int radius)
{
  double a=(double )4*3.1416*radius*radius ;
  printf(" area of the sphere: %.2lf ",a);
  return;
}



void find_volume(int radius)

{

     double v;
     v= ((double) 4/3)*3.1416*radius*radius*radius ;
     printf("Volume of the sphere: %.2lf",v);
     return ;
}

int main ()
{
    int r;
    printf("enter the radius: ");
    scanf("%d",&r);

    find_area(r) ;

     find_volume(r) ;


    return 0;
}

