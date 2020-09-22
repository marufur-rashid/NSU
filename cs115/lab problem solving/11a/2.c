#include<stdio.h>

struct Complex
{
    float real;
    float imag;
};

struct Complex add(struct Complex n1, struct Complex n2);

int main()
{
    struct Complex x, y, z;

    printf("First real number: ");
    scanf("%f",&x.real);

    printf("First imaginary number: ");
    scanf("%f",&x.imag);

    printf("2nd real number: ");
    scanf("%f",&y.real);

    printf("2nd imaginary number: ");
    scanf("%f",&y.imag);

    z = add(x,y);

    printf("result: %f\n",z.real);
    printf("result: %f\n",z.imag);

    return 0;
}

struct Complex add(struct Complex n1, struct Complex n2)
{
    struct Complex z;

    z.real=n1.real+n2.real;
    z.imag=n1.imag+n2.imag;

    return z;
}
