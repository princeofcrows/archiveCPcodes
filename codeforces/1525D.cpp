#include <bits/stdc++.h>

using namespace std;

#define mx 200015
//#define int long long
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

vector <int> v[2];
int dp[5002][5002];

int solve(int i, int j) {
	if(j >= v[1].size()) return 0;
	if(i >= v[0].size()) return mod;
	if(dp[i][j] != -1) return dp[i][j];

	int ret = solve(i+1, j+1) + abs(v[0][i] - v[1][j]);
	ret = min(ret, solve(i+1, j));

	return dp[i][j] = ret;
}

int32_t main(){
	//read();
	//write();
	fst;
	int n;
	while(cin >> n) {
		for(int i=0; i<n; i++) {
			int a;
			cin >> a;

			v[a].pb(i);
		}

		mem(dp, -1);

		cout << solve(0, 0) << endl;

		v[0].clear();
		v[1].clear();
	}
	return 0;
}
