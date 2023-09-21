#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
using namespace std;

lli dp[1005];

lli lego(lli m, lli n){
	if(m==0) return 1;
	if(dp[n]!=-1) return dp[n];
	int ret1, ret2, ret3, ret4;
	ret1 = ret2 = ret3 = ret4= 0;
	ret1 = lego(m-1);
	if(m>=2) ret2 = lego(m-2);
	if(m>=3) ret3 = lego(m-3);
	if(m>=4) ret4 = lego(m-4);
}

int main() {
	lli t, n
	cin >> t;
	while(t--){
		cin >> n >> m;
		memset(dp, -1, sizeof dp);
	}  
    return 0;
}

