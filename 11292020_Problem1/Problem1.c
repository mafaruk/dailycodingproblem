#include<stdio.h>
#include <stdlib.h>
int main()
{
	int k;
	int a[] = {10,7,5,8,3,4};
	printf("Enter the key element\n");
	scanf("%d",&k);
	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
		int rem  = abs(a[i] - k);
		//printf("%d\n", rem);
		for (int j = 0; j < sizeof(a)/sizeof(int); j++) {
			if (i==j) {
				continue;
			}
			else if(rem == a[j]){
				printf("%d(at indext a[%d]) + %d(at indext a[%d])\n",a[i],i,a[j],j);
			}
		}

	}
	return 0;
}
