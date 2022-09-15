#include <bits/stdc++.h>

using namespace std;

#define mx 400005
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
	int t;
	cin >> t;

	while(t--) {
		int n; string str;
		cin >> n >> str;

		int ans = 0;
		vector<int> v;
		for(int i=0; i<n; i++) {
			if(str[i] == 'L') {
				ans += (i);
				v.pb((n - 2*i - 1));
			} else {
				ans += (n - i - 1);
				v.pb((2*i - n  + 1));
			}
		}

		sort(v.rbegin(), v.rend());

		for(int i=0; i<n; i++) {
			if(v[i] > 0) ans += v[i];
			cout << ans << " ";
		}
		cout << "\n";
	}
	return 0;
}
