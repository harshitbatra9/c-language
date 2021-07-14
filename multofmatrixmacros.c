#include <stdio.h>
#define pr printf
#define s scanf
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  pr("Enter number of rows and columns of first matrix\n");
  s("%d%d", &m, &n);
  pr("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      s("%d", &first[c][d]);
 
  pr("Enter number of rows and columns of second matrix\n");
  s("%d%d", &p, &q);
  pr("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        s("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    pr("Product of the matrices:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        pr("%d\t", multiply[c][d]);
 
      pr("\n");
    }return 0;
  }
  