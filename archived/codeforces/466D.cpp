#include <bits/stdc++.h>

using namespace std;

#define mx 200015
#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 1000000007
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int dp[2005][2005], ara[2005];
int n, h;

int rec(int idx, int inc) {
	if(idx >= n) {
		if(inc == 0) return 1;
		return 0;
	}
	if(dp[idx][inc] != -1) return dp[idx][inc];

	int x =  h - (ara[idx] + inc);
	int ret = 0;

	if(x == 0) {
		if(inc == 0) ret = rec(idx + 1, inc);
		else ret = (rec(idx + 1, inc) + rec(idx + 1, inc-1) * inc) % mod;
	}
	else if(x == 1)
		ret = (rec(idx + 1, inc + 1) + rec(idx + 1, inc ) * (inc + 1)) % mod;

	return dp[idx][inc] = ret;
}


int32_t main(){
	//read();
	//write();
	fst;
	while(cin >> n >> h) {
		for(int i=0; i<n; i++) {
			cin >> ara[i];
		}

		mem(dp, -1);

		cout << rec(0, 0) << endl;
	}
	return 0;
}
