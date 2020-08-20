#include<stdio.h>
int main()
{
    int a[50][50];
    int i,j;

    int row;
    printf("enter number of row: ");
    scanf("%d",&row);

    int columns;
    printf("enter number of column: ");
    scanf("%d",&columns);

    printf("enter elemenrs: ");
    for (i=0;i<row;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf(" Enter which column to find sum of: ");
    scanf("%d",&columns);
    int sum =0;
    for (i=0;i<row;i++){
        sum =sum +a[i][columns-1];
    }
    printf("sum of colum %d : %d",columns,sum);
    return 0;
}
