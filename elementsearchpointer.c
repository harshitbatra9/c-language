#include <stdio.h>
int main()
{
    int a[3], n, i;
    int *pa, *pn;
    pa = &a[0], pn = &n;
    printf("Enter array element: ");
    for (i=0;i<3;i++)
    {
        scanf("%d",pa+i);
    }
    printf("Enter element for search: ");
    scanf("%d",pn);
    int j, x=0;
    for (j=0;j<3;j++)
    {
        if ( *(pa+j) == *pn)
        {
            x=1;
            break;
        }
        else
            continue;
    }
    if (x==1)
        printf("Found.\n");

    else
        printf("Not found.\n");
}
