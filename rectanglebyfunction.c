#include <stdio.h>


void area(int a,int b){

    int area;
    area=a*b;
    printf("area=%d",area);
}
int main()
{
    void area(int a ,int b );
    int m,n;
    printf("enter first side ");
    scanf("%d",&m);
    printf("enter second side");
    scanf("%d",&n);
    area(m,n);
}
