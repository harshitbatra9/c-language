#include <stdio.h>
int main()
{
    char x;
    printf("enter character ");
    scanf("%c",&x);
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
        printf("\nthe character is vowel ");
    }
    else{
        printf("\nthe charater is consonant");
    }
    return 0;
}