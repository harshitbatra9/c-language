#include <stdio.h>
int main()
{
    int a,b;
    printf("enter no of row");
    scanf("%d",&a);
    printf("enter no of column");
    scanf("%d",&b);
    int arr[a][b];
    int i,j;
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            printf("enter a[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("2d matrix is");
    for (i=0;i<a;i++)
    {
        printf("\n");
        for(j=0;j<b;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        return 0;
    }
}