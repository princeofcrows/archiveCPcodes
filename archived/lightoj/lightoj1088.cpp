#include <stdio.h>
#include <string.h>

int ara[100005], n;

int bilo(int x, int n, int y){
	int high, low;
	high = n-1;
	low = 0;
	int mid;
	while(low<=high){
		mid = low + (-low+high)/2;
		if(ara[mid]==x) return mid;
		else if(ara[mid]<x)	low = mid+1;
		else if(ara[mid]>x) high = mid-1;
	}
	if(y==1) return low;
	else return high;
}

int main(){
	int t, cas, q, i, a, b, v, stk, c;
	scanf("%d", &t);
	for(cas = 1; cas<=t; cas++){
		scanf("%d%d", &n, &q);
		for(i=0; i<n; i++){
			scanf("%d", &ara[i]);
		}
		printf("Case %d:\n", cas);
		while(q--){
			scanf("%d%d", &a, &b);
			printf("%d\n", bilo(b, n, 0)-bilo(a, n, 1)+1);
		}
	}
	return 0;
}
