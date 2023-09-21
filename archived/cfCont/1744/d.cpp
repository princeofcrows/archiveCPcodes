#include <bits/stdc++.h>

using namespace std;

#define mx 200005
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

bool check(int N,int pos){
	return (bool)(N & (1<<pos));
}

int ara[mx];

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		int already = 0;
		vector <int> v;

		for(int i=1; i<=n; i++) {
			cin >> ara[i];

			while(!check(ara[i], 0)) {
				already++;
				ara[i] = ara[i] >> 1;
			}

			int id = i, cnt = 0;

			while(!check(id, 0)) {
				cnt++;
				id = id >> 1;
			}

			v.pb(cnt);
		}

		sort(v.rbegin(), v.rend());

		int ans = 0;
		for(auto u: v) {
			if(already >=n) break;

			already += u;
			ans++;
		}

		if(already < n) cout << "-1\n";
		else cout << ans << "\n";
	}
	return 0;
}
