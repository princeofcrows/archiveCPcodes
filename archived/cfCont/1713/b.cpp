#include <bits/stdc++.h>

using namespace std;

#define mx 400005
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
vector<int> v;

bool isValley(int i) {
	return (v[i] < v[i-1] && v[i] < v[i+1]);
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	si(t);
	while(t--) {
		int n;
		si(n);

		for(int i=0; i<n; i++) {
			si(ara[i]);

			if(!i || v.back() != ara[i]) {
				v.pb(ara[i]);
			}
		}

		bool f = false;
		int m = v.size();
		for(int i=1; i<m-1; i++) {
			f |= isValley(i);
		}

		if(!f) printf("YES\n");
		else printf("NO\n");

		v.clear();
	}
	return 0;
}
