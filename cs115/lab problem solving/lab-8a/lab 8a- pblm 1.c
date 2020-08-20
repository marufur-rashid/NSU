#include<stdio.h>
int main(){
    int i, x, n, ara[10101];
    printf("Enter array size\n");
    scanf("%d", &n);

    printf("array element \n");
    for(i = 0; i < n; i++) {
    scanf("%d", &ara[i]);
    }

    printf("search key\n");
    scanf("%d", &x);

    int mat = 0;
    for(i = 0; i < n; i++)
    {
        if (x == ara[i])
        {
            mat = mat + 1;
        }
    }

    printf("search key appears %d times", mat);

    return 0;
}


