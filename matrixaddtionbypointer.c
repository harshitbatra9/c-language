#include<stdio.h>
void main()
	{
	  int matrix1[3][3], matrix2[3][3], i, j, add[3][3];
	  printf("Enter the elements of first matrix\n ");
	   for ( i=0; i<3; i++ )
	   {
	     for ( j=0; j<3; j++ )
	     {
		scanf("%d",&matrix1[i][j]);
	     }
	   }
	  printf("Enter the elements of second matrix\n ");
	    for ( i=0; i<3; i++ )
	    {
	      for ( j=0; j<3; j++ )
	      {
		scanf("%d",&matrix2[i][j]);
	      }
	    } 
	      for ( i=0; i<3; i++ )
	      {
		for ( j=0; j<3; j++ )
		{
		  add[i][j] = *(*(matrix1+i)+j) + *(*(matrix2+i)+j);
		}
	      }
		for ( i=0; i<3; i++ )
		{
		  for ( j=0; j<3; j++ )
		  {
		    printf("%d\t",add[i][j]);
		  }
		}
      }

