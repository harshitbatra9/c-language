#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("enter strig");
    gets(str);
    int l = 0;
    int x = strlen(str) - 1;
  
    while (x > l)
    {
        if (str[l++] != str[x--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}
