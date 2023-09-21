#include <bits/stdc++.h>

using namespace std;

#define mx 200015
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

int ara[22];

bool check(int N,int pos){
	return (bool)(N & (1<<pos));
}

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		for(int i=0; i<n; i++) {
			cin >> ara[i];
		}

		bool f = false;
		for(int i=1; i<(1<<n); i++) {
			vector<int> v;
			int cnt = 0;

			for(int j=0; j<n; j++) {
				if(check(i, j)) {
					v.pb(ara[j]);
					cnt++;
				}
			}

			for(int j=0; j<(1<<cnt); j++) {
				int tot = 0;
				for(int l=0; l<cnt; l++) {
					if(check(j, l)) tot += v[l];
					else tot -= v[l];
				}

				if(!tot) {
					f = true;
					break;
				}
			}

			if(f) break;
		}

		if(f) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
