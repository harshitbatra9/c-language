#include <stdio.h>
int main() {
    int n, x = 0, y= 1;
    int z = x+y;
    printf("Enter the number of terms ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", x, y);

    for (int a = 1; a <= n-2; ++a) {
        printf("%d ", z);
        x= y;
        y =z ;
        z= x + y;
    }

    return 0;
}
