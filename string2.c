#include <stdio.h>
#include <string.h>
int main()
{

    char name[20];
    printf("enter name");
    
    scanf("%[\n]",&name);
    printf("nameis:%s",name);
}