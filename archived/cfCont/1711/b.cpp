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
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int ara[mx];
pii fr[mx];

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	si(t);
	while(t--) {
		int n, m, tot = mod;
		map<int, int> mp;

		si(n); si(m);

		for(int i=1; i<=n; i++) {
			si(ara[i]);
		}

		for(int i=1; i<=m; i++) {
			si(fr[i].fi);
			mp[fr[i].fi]++;

			si(fr[i].se);
			mp[fr[i].se]++;
		}

		if(m%2) {
			for(int i=1; i<=n; i++) {
				if(mp[i] % 2) {
					tot = min(tot, ara[i]);
				}
			}

			for(int i=1; i<=m; i++) {
				int a = mp[fr[i].fi];
				int b = mp[fr[i].se];
				if((a+b - 1)%2) {
					tot = min(tot, ara[fr[i].fi] + ara[fr[i].se]);
				}
			}
		} else tot = 0;

		printf("%d\n", tot);
	}
	return 0;
}
