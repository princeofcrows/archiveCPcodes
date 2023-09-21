#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
using namespace std;

int gcd(int a, int b){
	if(a%b==0) return b;
	return gcd(b, a%b);
}

int lcm(int a, int b){
	return (a*b)/gcd(a, b);
}

int lcmm(int ara[], int n){
	if(n==2) return lcm(ara[0], ara[1]);
	else{
		return lcm(ara[n-1], lcmm(ara, n-1));
	}
}

int main() {
	//freopen("in.txt", "r", stdin);
	int t, n, m, mx, lm, gd, mp, c, fac, temp;
	cin >> n >> m;
	int a[n], b[m];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	if(n!=1)lm = lcmm(a, n);
	for(int i =0; i<m; i++){
		cin >> b[i];
	}
	gd = b[0];
	for(int i =1; i<m; i++){
		gd = gcd(gd, b[i]);
	}
	if(n==1) lm = a[0];
	if(m==1) gd = b[0];
	//cout << gd <<" "<<lm<<endl;
	c = 0;
	fac = 1;
	while(lm*fac<=gd){
		if(gd%(lm*fac)==0){
			c++;
		}
		fac++;
	}
	cout << c;
    return 0;
}

