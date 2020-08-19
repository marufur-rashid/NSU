
#include <stdio.h>

int main() {
    int a[10];
    int i, n = 5;

    printf("enter array elements:\n");
    for (i=0;i < n;i++) {
        scanf("%d", &a[i]);
    }

    printf("reversed order \n");
    for(i=n - 1; i>= 0; i--){
        printf("%d ", a[i]) ;
    }
    return 0;
}
