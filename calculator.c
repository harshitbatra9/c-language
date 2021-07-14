#include <stdio.h>

void calculator(float a,float b){

    float sum,multiplication,division;
    multiplication=a*b;
    sum=a+b;
    division=a/b;

    printf("\nsum=%f",sum);
    printf("\nmultiplication=%f",multiplication);
    printf("\ndivision=%f",division);

}
void calculator(float a ,float b );
int main()
{
    float m,n;
    printf("enter first number ");
    scanf("%f",&m);
    printf("enter second number");
    scanf("%f",&n);
    calculator(m,n);
}