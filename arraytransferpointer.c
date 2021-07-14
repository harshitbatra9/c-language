#include<stdio.h>

int main()
{
 int i, Size;
 int *p,*q;
  
 printf("\n Please Enter the Array Size \n");
 scanf("%d", &Size);
 int a[Size],b[Size];
 p=a;
 q=b;
 
 printf("\n Please Enter the Array Elements \n");
 for(i = 0; i < Size; i++)
  {
     scanf("%d",p+i);
   
  }
 
 /* copying one array to another */  
 for(i = 0; i < Size; i++)
  {
      *(q+i) = *(p+i);
   
  }

 printf("\n Elements of Second Array are: \n");
 for(int j = 0; j < Size; j++)
  {
    printf("\n Value Inside Arry b[%d] = %d",j , *(q+j));
  }
 
return 0;
}