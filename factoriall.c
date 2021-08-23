#include <stdio.h>
int main()
{
    int x,y=1;
    printf("factorial up to which number ");
    scanf("%d",&x);
    while (x>=1)
    {
        y=y*x;
        x--;
    }
    printf("factorial= %d ",y);
    return 0;
}