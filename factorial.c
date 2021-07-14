#include <stdio.h>
int main()
{
    
    int a,b,n;
    printf("factorial upto:");
    scanf("%d",&n);
    
    a=b=1;
    while(b<=n)
    {
        a*=b;
        b++;
    }
    printf("The Factorial of %d is : %d",n,a);
    return 0;
    printf("hello")
}
