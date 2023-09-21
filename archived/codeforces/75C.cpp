#include <bits/stdc++.h>

using namespace std;

#define mx 200005
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

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int32_t main(){
	//read();
	//write();
	fst;
	int a, b;

	while(cin >> a >> b) {
		int n;
		cin >> n;

		int g = gcd(a, b);
		vector <int> v;
		for(int i=1; i*i<=g; i++) {
			if(g % i == 0) {
				v.pb(i);

				int g_x = g / i;

				if(g_x != i) v.pb(g_x);
			}
		}

		while(n--) {
			int low, high, ans = -1;
			cin >> low >> high;

			for(auto div_g: v) {

				if(div_g >= low && div_g <= high) {
					ans = max(ans, div_g);
				}
			}

			cout << ans << "\n";
		}

	}
	return 0;
}
