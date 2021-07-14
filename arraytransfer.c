#include<stdio.h>
int main()
{
 int i, size;
 char *p,*q;
 printf("\n Please Enter the Array Size \n");
 scanf("%d", &size);
 char a[size],b[size];
 p=a;
 q=b;
 printf("\n Please Enter the Array Elements \n");
 for(i = 0; i < size; i++)
  {
     scanf(" %c",p+i);
  } 
 for(i = 0; i < size; i++)
  {
      *(q+i) = *(p+i);
  }
 printf("\n Elements of Second Array are: \n");
 for(int j = 0; j < size; j++)
  {
    printf("%c\n",*(q+j));
  }
return 0;
}