#include <stdio.h>
#include <string.h>

#define N 5000005

int prime[N];
unsigned long long ans[N];

void primesetter(){
	memset(prime, 1, sizeof(prime));
	int i, j;
	
	for(i = 0; i < N; i++){
		ans[i] = i;
	}
	ans[1] = 0;
	
	for (i = 2 ; i < N; i++){
		if(prime[i]){
			ans[i] = ans[i]*(i-1)/i;
			for(j = i+i; j < N; j = j + i){
				prime[j] = 0;
				ans[j] = ans[j]*(i-1)/i;
			}
		}
	}
	
	for(i = 2; i < N; i++){
		ans[i] = ans[i]*ans[i] + ans[i-1];
	}
}

int main(){
	primesetter();
	int a, b, t, csn = 1;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &a, &b);
		printf("Case %d: %llu\n", csn++, ans[b]-ans[a-1]);
	}
	return 0;
}
