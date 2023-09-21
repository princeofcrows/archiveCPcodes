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

int ara[2005], dp[2005][2005];

int solve(int i, int j) {
	if(i >= j) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	int ret = ara[j] - ara[i] + min(solve(i+1, j), solve(i, j-1));

	return dp[i][j] = ret;
}

int32_t main(){
	//read();
	//write();
	fst;
	int n;

	while(cin >> n) {
		for(int i=0; i<n; i++) cin >> ara[i];

		mem(dp, -1);
		sort(ara, ara + n);

		cout << solve(0, n-1) << endl;
	}
	return 0;
}
