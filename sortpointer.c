
#include <stdio.h>

void main()
{
    int n, i, j, tmp;
    int *p;
	
       printf("\n\nsort elements of array in ascending order :\n ");

    printf("Input the size of array : ");
    scanf("%d", &n);
    int arr[n];
    p=arr;

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",p+i);
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(p+i)>*(p+j))
            {
                tmp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", *(p+i));
    } 
    printf("\nElements of array in sorted descending order:\n");
    for (i=n-1;i>-1;i--)
    {
        printf("%d ",*(p+i));
   
    }  
}




