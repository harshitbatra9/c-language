#include <stdio.h> 
void sum(int *a, int*b) 
{
int c;
c = *a+*b; 
printf("sum =%d",c);
} 
int main() 
{ 
int num=20 ,num1=30; 
sum(&num,&num1); 
return 0;
}