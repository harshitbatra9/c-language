#include <stdio.h>
int main()
{
    int n=50;
    int *p;
    p=&n;
    printf("address =%u\n",p);
    p=p+1;
    printf("address =%u",p);
    return 0;


}