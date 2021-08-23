#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main(){
struct student s;
printf("Enter info");
printf("enter name");
scanf("%s",&s.name);
printf("enter roll");
scanf("%d",&s.roll);
printf("enter mark");
scanf("%f",&s.roll);
printf("%d",s.roll);
}

