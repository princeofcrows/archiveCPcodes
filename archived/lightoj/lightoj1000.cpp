#include <stdio.h>

int main(){
	int T, a, b, n, ara[125];
	scanf("%d", &T);
	n = 0;
	while(n<T){
		scanf("%d%d", &a, &b);
		ara[n] = a + b;
		n++;
	}
	n = 0;
	while(n<T){
		printf("Case %d: %d\n", n+1, ara[n]);
		n++;
	}
	return 0;
}
