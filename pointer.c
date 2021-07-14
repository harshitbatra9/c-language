#include <stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("enter nos.");
    scanf("%d %d",&a,&b);

    printf("before swapping a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("after swaping a=%d b=%d\n",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a; *a=*b;*b=temp;
}