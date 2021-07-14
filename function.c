#include <stdio.h>
void swap(int a ,int b );
int main()
{
    int m=2,n=4;
    printf("value before swap m=%d and n=%d",m,n);
    swap(m,n);
}
void swap(int a,int b){

    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    printf("\n value after swap m=%d and n=%d",a,b);

}