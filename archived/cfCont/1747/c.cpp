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
	int t;
	cin >> t;

	while(t--) {
		int n, o = 0;
		cin >> n;

		for(int i=0; i<n; i++) {
			cin >> ara[i];
		}

		for(int i=1; i<n; i++) {
			if(ara[i] < ara[0]) o = 1;
		}

		if(o) cout << "Alice\n";
		else cout << "Bob\n";
	}
	return 0;
}
