// Unsolved

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




int32_t main(){
	//read();
	//write();
	fst;
	int n, m;

	while (cin >> n >> m) {
		bool flag = false;

		int ans = inf;
		for(int i=1; i<=(mx*20); i++) {
			if(i > n) break;

			int a = i;
			int b = (m + i - 1) / i;

			if(b <= n && a*b>= m) {
				ans = min(ans, b*a);
				flag = true;
			}
		}

		if(flag) cout << ans << endl;
		else cout << -1 << endl;
	}


	return 0;
}
