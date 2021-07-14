#include <stdio.h>
int main()
{
 int size, i, a[10], b[10], temp[10] ;
 int *p,*q;  
 printf("\nPlease Enter the Size of the Array\n");
 scanf("%d", &size);
 printf("\nPlease Enter the First Array Elements\n");
 for(i = 0; i < size; i++)
  {
      scanf("%d", &a[i]);
  }
 printf("\nPlease Enter the Second Array Elements\n");
 for(i = 0; i < size; i ++)
  {
      scanf("%d", &b[i]);
  }
  p=a;
  q=b; 
 for(i = 0; i < size; i++)
  {
    *p = *p + *q;
    *q = *p - *q; 
    *p = *p - *q;
  }
 printf("\n a[%d] Array Elements After Swapping \n",size); 
 for(i = 0; i < size; i ++)
  {
      printf(" %d \t ",*p+i);
  }
printf("\n\n b[%d] Array Elements After Swapping \n", size); 
 for(i = 0; i < size; i ++)
  {
      printf(" %d \t ",*q+i);
  }
  return 0;
}