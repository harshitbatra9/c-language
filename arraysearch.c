#include <stdio.h>
void search(int a);
int main()
{
    int b;
    printf("enter ellement you want to search:");
    scanf("%d",&b);
    search(b);
}
void search(int a){
    int i,n=0;
    int arr[10];
    printf("Input 10 elements in the array :\n");
       for(i=0;i<10;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
    for (i=0;i<10;i++){
        if (arr[i]==a){
            n=1;
        }
    }
    if (n==1){
        printf("Succesfully found");
        }
    else {
    printf("not found:%d in array",a);}
    }
    