#include <stdio.h>
int main()
{
    int x,y,temp;
    printf("enter first no.");
    scanf("%d",&x);
    printf("enter second no.");
    scanf("%d",&y);
    printf("before swapping x=%d,y=%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("after swapping x=%d,y=%d\n",x,y);
    return 0;
}