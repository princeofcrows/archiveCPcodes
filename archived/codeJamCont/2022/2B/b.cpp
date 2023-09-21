#include <bits/stdc++.h>

using namespace std;

#define mx 400005
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

int ara[1002][102], def[1002][2];
int dp[1002][2];
int n, p;

int solve(int idx, int l) {
	if(idx > n) return 0;
	if(dp[idx][l] != -1) return dp[idx][l];

	int ret = inf, c = def[idx][1] - def[idx][0];

	ret = min(ret, solve(idx+1, 0) + llabs(def[idx-1][l] - def[idx][1]) + c);
	ret = min(ret, solve(idx+1, 1) + llabs(def[idx-1][l] - def[idx][0]) + c);

	return dp[idx][l] = ret;
}

int32_t main(){
	//read();
	//write();
	fst;
	int t, cs = 1;
	cin >> t;

	while(t--) {
		cin >> n >> p;

		for(int i=1; i<=n; i++) {
			def[i][0] = inf;
			def[i][1] = -1;
			for(int j=0; j<p; j++) {
				cin >> ara[i][j];
				def[i][0] = min(def[i][0], ara[i][j]);
				def[i][1] = max(def[i][1], ara[i][j]);
			}
		}

		def[0][0] = def[0][1] = 0;
		mem(dp, -1);

		cout << "Case #" << cs++ <<": " << solve(1, 0) << "\n";

	}
	return 0;
}
