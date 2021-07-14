#include <stdio.h>
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   swap(&x, &y); 

   printf("After Swapping x = %d y = %d", x, y);
 
   return 0;
}
 