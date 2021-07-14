#include <stdio.h>
int main()
{
int a,b,*x,*y,sum;
printf("enter first no");
scanf("%d",&a);
printf("enter second no");
scanf("%d",&b);
x=&a;
y=&b;
sum=*x**y;
printf("multiplication is %d",sum);
}