#include <stdio.h>
struct employee
{
int emp_id;
char name[20];
float salary;
};
int main()
{
struct employee e;
printf("Enter the employee id of employee");
scanf("%d",&e.emp_id);
printf("Enter the name of employee");
scanf("%s",e.name);
printf("Enter the salary of employee");
scanf("%f",&e.salary);
printdata(struct employee e); // fn Call
return 0;
}
void printdata(struct employee emp)
{
printf ("\nThe employee id of employee is : %d",emp.emp_id);
printf ("\nThe name of employee is : %s", emp.name);
printf ("\nThe salary of employee is : %f", emp.salary);
}