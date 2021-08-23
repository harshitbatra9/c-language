#include <stdio.h>
int main()
{
    int x,y=0;
    printf("sum up to which number ");
    scanf("%d",&x);
    while (x>=1)
    {
        y=y+x;
        x--;
    }
    printf("sum of natural number is %d ",y);
    return 0;
}