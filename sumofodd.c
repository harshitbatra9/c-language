#include <stdio.h>
int main()
{
    int sum=0,a=1,n;
    printf("sum of odd number upto which number");
    scanf("%d",&n);
    while (a<=n)
    {
        if (a%2!=0)
        {
            sum=sum+a;
        }
        a++;
    }
    printf("%d",sum);
    return 0;
}
