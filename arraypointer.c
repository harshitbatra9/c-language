#include <stdio.h>
int main()
{
    int arr[1000];
    int n, i;
    int *p = arr;   
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;   
    }
    p= arr;
    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", *p);
        p++;
    }
    return 0;
}