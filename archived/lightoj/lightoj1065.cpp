#include <stdio.h>

int main(){
	int t, csn = 1, ans, i, a, b, m, r, ten;
	unsigned long long f, temp, sum, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%llu%d", &a, &b, &n, &m);
		f = b;
		sum = a + b;
		for(i = 0; i < n-2; i++){
			temp = sum;
			sum = sum + f;
			f = temp;
		}
		ten = 10;
		ans = 0;
		for(i = 0; i <m-1; i++){
			ten = 10*ten;
		}
		ans += (sum%ten);
		printf("Case %d: %llu\n", csn++, ans);
	}
	return 0;
}
