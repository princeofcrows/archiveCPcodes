#include <bits/stdc++.h>

using namespace std;

#define mx 1000005
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

set <pii> g[mx];
int res[mx], dp[mx];

void pre() {
	for(int i=2; i<mx; i++) res[i] = i;

	for(int i=2; i<mx; i++) {
		for(int j=i+i; j<mx; j+=i) {
			res[j] = min(res[j], i);
		}
	}

	for(int i=2; i<mx; i++) {
		if(res[i] == i) {
			g[i].insert({i, 1});
			dp[i] = 1;
			continue;
		}

		int a = i / res[i];
		int b = res[i];

		for(auto p: g[a]) {
			g[i].insert(p);
			pii value = {p.fi + i, p.se + 1};

			if(value.fi < mx) {
				dp[value.fi] = max(dp[value.fi], value.se);
				g[i].insert(value);
			}
		}

		for(auto p: g[b]) {
			g[i].insert(p);
			pii value = {p.fi + i, p.se + 1};

			if(value.fi < mx) {
				dp[value.fi] = max(dp[value.fi], value.se);
				g[i].insert(value);
			}
		}
	}
}

int solve(int n) {

	return dp[n];
}

int32_t main(){
	//read();
	//write();
	//fst;
	pre();

	int t, cs = 1;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		cout << "Case #" << cs++ <<": "<< solve(n)<<endl;
	}
	return 0;
}
