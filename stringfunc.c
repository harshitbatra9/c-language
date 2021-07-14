#include <stdio.h>
#include <string.h>
int main()
{
    char s[5]="abcd";
    //length
    printf("length of string is %zu \n",strlen(s));
    //second way
    int b;
    b=strlen(s);
    printf("length is %d\n",b);
    //concatenate
    char k[5]="efg";
    strcat(s,k);
    puts(s);

    //compare   answer 0 if equal

    char str1[20]="abcdefg", str2[20]="abcDefg";
    int result;
    result=strcmp(s,str1);
    printf("%d\n",result);
    result=strcmp(s,str2);
    printf("%d\n",result);

    //copy
    char str3[30];
    strcpy(str3,s);
    puts(str3);
    return 0;
}

  

    