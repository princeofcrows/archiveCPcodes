#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cnt[5005], dp[5001][5001];

int solve(int l, int h) {
	if(l >= h) return 0;
	if(dp[l][h]!=-1) return dp[l][h];

	int ret = 0;
	if(h>2*l) {
		int x = solve(l + 1, h);
		int y = solve(l, h - 1);
		ret = min(x + cnt[l], y + cnt[h]);
	}

	return dp[l][h] = ret;
}

int32_t main(){
	read();
	write();
	fst;
	int n;
	while(cin >> n) {
		mem(cnt, 0);
		mem(dp, -1);

		for(int i=0; i<n; i++) {
			int a;
			cin >> a;
			cnt[a]++;
		}

		cout << solve(1, 5000) << "\n";
	}
	return 0;
}
