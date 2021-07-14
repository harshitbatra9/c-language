#include <stdio.h>
int main()
{
    int x;
    printf("enter the number you want to check");
    scanf("%d",&x);
    if (x<0)
    {
        printf("%d is negative",x);
    }
    else
    printf("%d is not negative",x);
}