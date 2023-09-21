#include <bits/stdc++.h>
using namespace std;


int main(){
	freopen("in.txt", "r", stdin);
	unsigned long long int t, j, i, k, n, ans, cas, a, b, c, d, e, f;
	scanf("%lu", &t);
	j = 10000007;
	for (cas = 1; cas<=t; cas++){
		scanf("%lu %lu %lu %lu %lu %lu %lu", &a, &b, &c, &d, &e, &f, &n);
		if( n == 0 ) ans = a;
	    if( n == 1 ) ans = b;
	    if( n == 2 ) ans = c;
	    if( n == 3 ) ans = d;
	    if( n == 4 ) ans = e;
	    if( n == 5 ) ans = f;
	    else{
	    	n = n - 6;
	    	ans = (a+b+c+d+e+f)%j;
	    	ans += (n*f)%j;
			ans += ((n/2)*e)%j;
			ans += ((n/3)*d)%j;
			ans += ((n/4)*c)%j;
			ans += ((n/5)*b)%j;
			ans += ((n/6)*a)%j;	
		}
		printf("Case %lu: %lu\n", cas, ans%j);
	}
	return 0;
}
