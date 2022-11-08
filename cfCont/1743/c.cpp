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

int ara[mx];
string str;

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n >> str;
		str += '0';

		set<pii> q;
		int ans = 0;
		bool is_zero = false;

		for(int i=0; i<=n; i++) {
			if(i < n) cin >> ara[i];


			if(str[i] == '1') {
				q.insert({ara[i], i});
				if(i) q.insert({ara[i-1], (i - 1)});
			} else {
				bool first = is_zero;

				while(!q.empty()) {
					pii p = (*q.begin());

					if(!first) ans += p.fi;

					first = false;
					q.erase(p);
				}

				is_zero = true;
			}
		}



		cout << ans << "\n";

	}
	return 0;
}
