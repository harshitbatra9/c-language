#include <stdio.h>

int main()
{
    int x, y, sum;
    int *p, *q;

    p = &x; 
    q = &y; 

    printf("Enter any two numbers: ");
    scanf("%d %d", p, q);

    sum = *p + *q;

    printf("Sum = %d", sum);

    return 0;
}