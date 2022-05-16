#include <stdio.h>
#include <math.h>

double n[1000001];

int main(){
	int T, count;
	int base, num, factbase;
	n[0] = 0;
	count = 1;
	while(count<1000001){
		n[count] = n[count-1] + log10(count);
		count++;
	}
	count = 1;
	scanf("%d", &T);
	while(T--){
		scanf("%d%d", &num, &base);
		printf("Case %d: %.0lf\n", count, floor(n[num]/log10(base) + 1));
		count++;
	}
	return 0;
}
