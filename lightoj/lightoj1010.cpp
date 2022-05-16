#include <stdio.h>

int main(){
	int T, n, m, p, q, x;
	scanf("%d", &T);
	q = 0;
	while(T--) {
		scanf("%d%d", &n, &m);
		if(m>n){
			p = m;
			m = n;
			n = p;
		}
		if(m==1){
			x = n;
		}
		else if(m==2){
			if(n%2 != 0){
				x = n+1;
			}
			else if(n%4 == 0){
				x = n;
			}
			else {
				x = n+2;
			}
		}
		else{
			x = (n*m + 1)/2;
		}
		q++;
		printf("Case %d: %d\n", q, x);
	}
	
	return 0;
}
