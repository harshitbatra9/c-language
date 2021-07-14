#include <stdio.h> 
void areaCircle(int *a) 
{
int c;
c = 3.14**a**a; 
printf("sum =%d",c);
} 
int main() 
{ 
int r;
printf("Enter radius");
scanf("%d",&r);
areaCircle(&r); 
return 0;
}