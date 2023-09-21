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
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int a[mx], b[mx], fa[mx], fb[mx];

int Set(int N,int pos){
	return N=N | (1<<pos);
}
int reset(int N,int pos){
	return N= N & ~(1<<pos);
}
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
			cin >> a[i];
			fa[i] = 0;

		}

		for(int i=0; i<n; i++) {
			cin >> b[i];
			fb[i] = 0;
		}


		int ans = 0;
		for(int i=30; i>=0; i--) {
			int ca = 0, cb = 0;

			for(int j=0; j<n; j++) {
				if(check(a[j], i)) ca += 1;
				if(check(b[j], i)) cb += 1;
			}

			if(ca == n - cb) {
				map <int, int> ma, mb;
				for(int j=0; j<n; j++) {
					fa[j] = check(a[j], i) ? Set(fa[j], i) : fa[j];
					ma[fa[j]]++;
					fb[j] = !check(b[j], i) ? Set(fb[j], i) : fb[j];
					mb[fb[j]]++;
				}

				if(ma == mb) {
					ans = Set(ans, i);
				} else {
					for(int j=0; j<n; j++) {
						fa[j] = reset(fa[j], i);
						fb[j] = reset(fb[j], i);
					}
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
