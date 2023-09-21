#include <bits/stdc++.h>

using namespace std;

#define mx 200015
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

int Set(int N,int pos){
	return N=N | (1LL<<pos);
}
int reset(int N,int pos){
	return N= N & ~(1LL<<pos);
}
bool check(int N,int pos){
	return (bool)(N & (1LL<<pos));
}

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;

		if(m == 0) {
			if(n == 0) cout << 1 << endl;
			else cout << 0 << endl;

			continue;
		}

		int ans = 0, f = 0, g = 0;

		for(int i=31; i>=0; i--) {
			if(check(m, i)) {
				f = 1;
			}

			if(f == 1) {
				if(check(m, i)) {
					bool y = check(n, i);
					if(!y) ans = Set(ans, i);
				} else {
					bool y = check(n, i);
					if(y) {
						g = 1;
						break;
					}
				}
			}
		}

		if(!g) {
			for(int i=0; i<31; i++) {
				bool y = check(n, i);
				bool x = check(m, i);
				if(!y && !x) {
					ans = Set(ans, i);
					for(int j=i-1; j>=0; j--) ans = reset(ans, j);
					break;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}
