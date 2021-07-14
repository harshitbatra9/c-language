#include <stdio.h>
int checkPrime(int n);
int main()
{
int a=0,n;
printf("enter number");
scanf("%d",&n);
for (int i = 2; i <= n / 2; ++i) {
        
        if (checkPrime(i) == 1) {
            if (checkPrime(n - i) == 1) {
                printf("yes it is sum of 2 prime that are %d and %d",i,n-i);
                a = 1;
            }
        }
}
if (a==0){
    printf("no it is not sum of 2prime");
}
}
int checkPrime(int n) {
    int i, isPrime = 1;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}




