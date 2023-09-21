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

int ara[10005];

int32_t main(){
	//read();
	//write();
	fst;

	int t;
	cin >> t;
	mem(ara, 0);
	while(t--) {
		int n;
		cin >> n;
		std::vector<int> v;

		for(int i=1; i<=n; i++) {
			int a;
			cin >> a;
			if(ara[a] == 0) {
				v.pb(a);
			}
			ara[a]++;
		}

		int ans = 0, left = 0;
		for(auto a: v) {
			ans++;
			left = abs(left - (1 - ara[a]%2));
			ara[a] = 0;
		}

		cout << ans - left << endl;
	}
	return 0;
}
