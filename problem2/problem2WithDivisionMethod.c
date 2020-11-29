#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a[] = { 3, 2 ,1};
  int n = sizeof(a)/sizeof(int);
  int product[n];
  for (int i = 0; i < n; i++) {
    int pro = 1;
    for (int j = 0; j < n; j++) {
       pro =  pro * a[j];
    }
    product [i] = pro/a[i];
	}
  for (int j = 0; j < n; j++) {
    printf("%d ", product[j] );
  }
  return 0;
}
