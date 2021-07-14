#include <stdio.h>
void swapnum(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping %d,%d",a,b);

}
int main()
{
    int x,y;
    printf("enter first no.");
    scanf("%d",&x);
    printf("enter second no.");
    scanf("%d",&y);
    swapnum(x,y);
    return 0;
    }