#include <stdio.h>
int main()
{
    int a,b,c,*x,*y,*z;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    x=&a;
    y=&b;
    z=&c;
    if (*x>*y && *x>*z)
    {
        printf("%d is largest",*x);
    }
    if (*y>*x && *y>*z)
    {
        printf("%d is largest",*y);
    }
    if (*z>*y && *z>*x)
    {
        printf("%d is largest",*z);
    }

}