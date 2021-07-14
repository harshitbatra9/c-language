#include <stdio.h>
int sum(int);
int main()
{
    int x;
    printf("Enter a positive integer :");
    scanf("%d", &x);
    printf("The sum of first %d numbers is %d.", x, sum(x));
    return 0;
}

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}