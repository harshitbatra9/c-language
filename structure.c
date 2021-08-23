#include <stdio.h>
int main()
{
int y;
struct stundent
{
    int a[10];
    char p;
}s1;
y=sizeof(s1);
printf("%d",y);
}