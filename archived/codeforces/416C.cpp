#include <bits/stdc++.h>

using namespace std;

#define mx 200005
#define int long long
#define pii pair <int, int>
#define piii pair <pii, int>
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

int dp[1005][1005];
piii cp[1005];
pii r[1005];
int n, k;
vector <pii> res;

int solve(int i, int j) {
	if(i >=n || j>=k) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	int ret = solve(i+1, j+1);
	if(cp[i].fi.fi > r[j].fi) {
		ret = max(ret, solve(i+1, j));
	} else{
		ret = max(ret, solve(i+1, j+1) + cp[i].fi.se);
		ret = max(ret, solve(i+1, j));
		ret = max(ret, solve(i, j+1));
	}

	return dp[i][j] = ret;
}

int path(int i, int j) {
	if(i >=n || j>=k) return 0;
	int ret = solve(i+1, j+1);

	if(cp[i].fi.fi > r[j].fi) {
		int ret2 = solve(i+1, j);

		if(ret > ret2) {
			return path(i+1, j+1);
		} else {
			return path(i+1, j);
		}
	} else{
		int ret3 = solve(i+1, j+1) + cp[i].fi.se;
		int ret4 = solve(i, j+1);
		int ret5 = solve(i+1, j);

		if(ret3 >= ret && ret3 >= ret4 && ret3 >= ret5) {
			res.pb({cp[i].se, r[j].se});
			return path(i+1, j+1) + 1;
		} else if(ret >= ret3 && ret >= ret4 && ret >= ret5) {
			return path(i+1, j+1);
		} else if(ret4 >= ret3 && ret4 >= ret && ret4 >= ret5) {
			return path(i, j+1);
		} else if(ret5 >= ret3 && ret5 >= ret && ret5 >= ret4) {
			return path(i+1, j);
		}
	}

	return 0;
}

int32_t main(){
	//read();
	//write();
	fst;

	while(cin >> n) {
		for(int i=0; i<n; i++) {
			cin >> cp[i].fi.fi >> cp[i].fi.se;
			cp[i].se = i;
		}

		cin >> k;
		for(int i=0; i<k; i++) {
			cin >> r[i].fi;
			r[i].se = i;
		}

		sort(cp, cp+n);
		reverse(cp, cp+n);

		sort(r, r+k);
		reverse(r, r+k);

		mem(dp, -1);

		int s = solve(0, 0);
		int m = path(0, 0);

		cout << m <<" " << s << "\n";
		for(auto u: res) {
			cout << u.fi+1 << " " << u.se+1<<"\n";
		}

		res.clear();
	}
	return 0;
}
