#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

int ara[mx];



int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n, q;
		cin >> n >> q;

		int odd = 0, ev = 0;
		int ans = 0;

		for(int i=0; i<n; i++) {
			cin >> ara[i];

			odd += ara[i]%2;
			ev += (1LL - ara[i]%2);

			ans += ara[i];
		}

		while(q--) {
			int tp, x;
			cin >> tp >> x;

			if(tp == 0) {
				ans += (x * ev);

				if(x % 2) {
					odd = n;
					ev = 0;
				}
			} else {
				ans += (x * odd);

				if(x % 2) {
					ev = n;
					odd = 0;
				}
			}

			cout << ans << "\n";
		}

	}
	return 0;
}
