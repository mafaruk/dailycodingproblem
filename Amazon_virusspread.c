// Given n number of persons in a park. One of them is having a virus. But we don't know whom.
// Also, the position of all persons is given. A contaminated person can spread it up to d distance.
// When the best case (Spread is minimum) and the worst case(Spread is maximum) would occur?
// e.g.
// N=5
// Position=[1, 3, 5, 9, 14]
// d=5

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void virusSpread(int *, int, int);
int main(int argc, char const *argv[]) {
  int a[] = {1, 3, 5, 9, 14};
  int n,d;
  n = d = 5;
  virusSpread(a, n, d);
  return 0;
}
void virusSpread(int *a, int n, int d ){
  int spArr[n];
  for (size_t i = 0; i < n; i++) {
    int spread = 0;
    for (size_t j = 0; j < n; j++) {
      if(i==j){
          continue;
        }
        else{
          if(abs(a[i]-a[j])<=d){
            spread++;
        }
      }
    }
    spArr[i]=spread;
  }
  int minSpread = spArr[0];
  int maxSpread = spArr[0];
  int Imin = 0;
  int Imax = 0;
  for (size_t i = 1; i < n; i++) {
    if(minSpread > spArr[i])
    {
      minSpread = spArr[i];
      Imin = i;
    }
    if(maxSpread < spArr[i]){
      maxSpread = spArr[i];
      Imax = i;
    }
  }
    printf("if %d is get affetced then virus spread will be minimum, %d persons\n",a[Imin],minSpread );
    printf("if %d is get affetced then virus spread will be maximum, %d persons\n", a[Imax], maxSpread );
}
