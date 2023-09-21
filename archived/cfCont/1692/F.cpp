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

int ara[mx], d[11];

string sol() {
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			for(int l=0; l<10; l++) {
				if((i+j+l)%10==3) {
					std::vector<int> s = {i, l, j};
					bool f = true;

					for(auto u: s) {
						d[u]--;
						f = f && (d[u] >= 0);
					}
					for(auto u: s) {
						d[u]++;
					}

					if(f) {
						return "Yes";
					}
				}
			}
		}
	}

	return "No";
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
		mem(d, 0);
		for(int i=1; i<=n; i++) {
			cin >> ara[i];
			d[ara[i] % 10]++;
		}

		cout << sol() << "\n";
	}
	return 0;
}
