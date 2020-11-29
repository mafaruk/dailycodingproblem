#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a[] = {1,2,3,4,5};
  int n = sizeof(a)/sizeof(int);
  int product[n];
  for (int i = 0; i < n; i++) {
    int pro = 1;
    for (int j = 0; j < n; j++) {
      if(i == j){
        continue;
      }
      else{
          pro =  pro * a[j];
      }

    }
    product[i] = pro;
	}
  for (int j = 0; j < n; j++) {
    printf("%d ", product[j] );
  }
  return 0;
}
