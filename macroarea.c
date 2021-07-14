#include <stdio.h>
#define pi 3.1416
#define p printf
int main(){
    printf("enter 1 for area of circle ");
    printf("enter 2 for volume of cube");
    int y;
    float r,area,x,volume;
    printf("Enter  (1 or 2) ");
    scanf("%d",&y);
    switch(y){
    case 1:
    p("Enter radius");
    scanf("%f",&r);
    area=pi*r*r;
    p("area=%f",area);
    break;
    case 2:
    p("enter side");
    scanf("%f",&x);
    volume=x*x*x;
    p("volume = %f",volume);
    break;
    default:
    p("That's not 1 or 2");

}
}