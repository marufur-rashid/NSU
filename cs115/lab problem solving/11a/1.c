#include <stdio.h>
#include <string.h>

struct Shape
{
    double length;
    double width;
};

int findArea(struct Shape R);

int findPerimeter(struct Shape R);

int main()
{
    double area, perimeter;
    struct Shape rectangle;
    printf("Enter for length: ");
    scanf("%lf", &rectangle.length);
    printf("Enter for Width: ");
    scanf("%lf", &rectangle.width);
    area = findArea (rectangle);
    printf("Area of the Rectangle: %.2lf \n", area);
    perimeter = findPerimeter (rectangle);
    printf("Perimeter of the Rectangle: %.2lf\n", perimeter);
    return 0;
}

int findArea (struct Shape R)
{
    double x= R.length*R.width ;
    return x ;
}

int findPerimeter (struct Shape R)
{
    double y = 2*(R.length + R.width) ;
    return y;
}
