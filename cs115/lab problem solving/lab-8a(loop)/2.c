#include<stdio.h>
int main()
{
    int i, a=10, s, sum = 0;
    for (i=a, s=1; i>=1; i--, s++)
    {
        if(s%2 == 0) {
            sum = sum - (i * i);
        }
        else {
            sum = sum + (i * i);
        }
    }
    printf("Series sum is: %d\n", sum);

}

