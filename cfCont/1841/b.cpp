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

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		vector <int> v;
		bool isSort = true;

		for(int i=0; i<n; i++) {
			int a;
			cin >> a;

			if(v.size() == 0) {
				v.pb(a);
				cout << "1";
			} else {
				if(v.back() <= a) {
					if(isSort) {
						v.pb(a);
						cout << "1";
					} else {
						if(v[0] >= a) {
							v.pb(a);
							cout << "1";
						} else {
							cout << "0";
						}
					}
				} else {
					if(isSort) {
						if(v[0] >= a) {
							isSort = false;
							v.pb(a);
							cout << "1";
						}else {
							cout << "0";
						}
					} else {
						cout << "0";
					}
				}
			}
		}

		cout << "\n";
	}
	return 0;
}
