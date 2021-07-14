#include <stdio.h>

void fact(int n){
    int a,b;
    
    a=b=1;
    while(b<=n)
    {
        a=a*b;
        b++;
    }
    printf("The Factorial of %d is : %d",n,a);
}
void fact(int n);
int main()
{
    int c;
    printf("factorial upto ");
    scanf("%d",&c);
    fact(c);
}