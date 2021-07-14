#include <stdio.h>
int main()
{
float a,b,*x,*y,sum,sub,mul,div;
printf("enter first no");
scanf("%f",&a);
printf("enter second no");
scanf("%f",&b);
x=&a;
y=&b;
sum=*x+*y;
sub=*x-*y;
mul=*x**y;
div=*x / *y;
printf("sum is %f\n",sum);
printf("subtraction = %f\n",sub);
printf("multiplication is %f\n",mul);
printf("division is %f\n",div);

}