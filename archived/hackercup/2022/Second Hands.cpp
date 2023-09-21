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
#define read() freopen("second_hands_input.txt", "r", stdin)
#define write() freopen("second_hands_output.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int32_t main(){
	read();
	write();
	//fst;
	int t, cs = 1;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		map <int, int> mp;
		bool f = true;

		for(int i=0; i<n; i++) {
			int a;
			cin >> a;
			mp[a]++;

			if(mp[a] > 2) f = false;
		}

		if(2*k < n) f = false;

		cout << "Case #" << cs++ << ": ";
		if(f) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
