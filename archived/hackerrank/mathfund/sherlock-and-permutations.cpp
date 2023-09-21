#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int ara[2005];
long long mod;

void fact(){
    ara[0] = 1;
    for(long long int i=1; i<2003; i++) {
        ara[i] = (i*ara[i-1])%mod;
        //cout << i << " " << ara[i] << endl;
    }
}

long long bigmod(long long a, long long b){
    if(b==0) return 1%mod;
    long long x = bigmod(a, b/2);
    x = (x*x)%mod;
    if(b%2) return (x*a)%mod;
    return x%mod;
}

int main() {
	//freopen("in.txt", "r", stdin);
    long long int n, t, m, mn, ans;
    cin >> t;
    mod  = 1000000007;
    fact();
    while(t--){
    	cin >> n >> m;
    	//cout << bigmod(n, mod-2) << endl;
    	mn = bigmod(ara[n], mod-2)*bigmod(ara[m-1], mod-2);
    	mn%=mod;
        ans = ara[n+m-1]*mn;
        ans%=mod;
		cout << ans <<endl;
	}
    return 0;
}

