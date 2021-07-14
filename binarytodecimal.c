#include <stdio.h>
 
void main()
{
    int  num, b, d = 0, base = 1, rem;
 
    printf("Enter a binary number \n");
    scanf("%d", &num); 
    b = num;
    while (num > 0)
    {
        rem = num % 10;
        d = d + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("Its decimal equivalent is = %d \n", d);
}