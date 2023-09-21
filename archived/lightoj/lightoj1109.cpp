#include <stdio.h>
#include <math.h>

int factnum[1001], num[1001];

int main(){
	int count = 3, n = 3, fact, faN, temp, tempnum, T, gn;
	factnum[1] = 1;
	num[1] = 1;
	factnum[2] = 2;
	num[2] = 2;
	while(count<1001){
		fact = 1;
		faN = 0;
		while(fact<=sqrt(n)){
			if(n%fact==0){
				if(n/fact!=fact){
					faN=faN+2;
				}
				else{
					faN++;
				}
			}
			fact++;
		}
		factnum[count] = faN;
		num[count] = n;
		n++;
		count++;
	}
	count = 2;
	int tempcoun;
	while(count<1001){
		tempcoun = 2;
		while(tempcoun<1001-count+1){
			if((factnum[tempcoun]>factnum[tempcoun+1])||((factnum[tempcoun]==factnum[tempcoun+1])&&num[tempcoun]<num[tempcoun+1])){
				temp = factnum[tempcoun+1];
				tempnum = num[tempcoun+1];
				factnum[tempcoun+1] = factnum[tempcoun];
				num[tempcoun+1] = num[tempcoun];
				factnum[tempcoun] = temp;
				num[tempcoun] = tempnum;
			}
			tempcoun++;
		}
		count++;
	}
	count = 1;
	scanf("%d", &T);
	while(T--){
		scanf("%d", &gn);
		printf("Case %d: %d\n", count, num[gn]);
		count++;
	}
	return 0;
}
