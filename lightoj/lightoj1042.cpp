#include <stdio.h>
#include <math.h>

int ara[100000001];

int bincov(int n){
	int count = 0;
	while(n>0){
		if(n%2){
			count++;
		}
		n = n/2;
	}
	return count;
}

int main(){
	int t, count;
	unsigned long long int n, temp;
	count = 1;
	while(count<100000001){
		ara[count] = bincov(count);
		count++;
	}
	scanf("%d", &t);
	count = 1;
	while(t--){
		scanf("%lld", &n);
		temp = ara[n];
		while(1){
			n++;
			if(temp == ara[n]) break;
		}
		printf("Case %d: %lld\n", count, n);
		count++;
	}
	return 0;
}
