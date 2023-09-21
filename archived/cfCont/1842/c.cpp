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

int a[mx], p[mx], mp[mx], dp[2][mx];

void init(int n) {
	for(int i=1; i<=n; i++) {
		mp[i] = -1;
		p[i] = -1;
		dp[0][i] = -1;
		dp[1][i] = -1;
	}
}

int solve(int idx, int st) {
	if(idx <= 0) return 0;
	if(dp[st][idx] != -1) return dp[st][idx];

	int ret = 0;

	if(p[idx] != -1) {
		int p_i = p[idx];
		ret = max(ret, solve(p_i, 0) + idx - p_i + st);
	}

	ret = max(ret, solve(idx - 1, 1) );

	return dp[st][idx] = ret;
}

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		init(n);

		for(int i=1; i<=n; i++) {
			cin >> a[i];
			if(mp[a[i]] != -1) {
				p[i] = mp[a[i]];
			}

			mp[a[i]] = i;
		}

		cout << solve(n, 1) << endl;
	}
	return 0;
}
