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


int32_t main(){
	//read();
	//write();
	//fst;
	mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
	int t;
	cin >> t;

	while(t--) {
		bool cor = false;
		int n = 1;

		for(int i=0; i<=300; i++) {
			if(n == -1) {
				return 0;
			}
			if(n == 0) {
				cor = true;
				break;
			} else if(n == 8) {
				cout << "11111111" << endl;
			} else {
				vector<int> permutation(8, 0);

				for (int j = 0; j < n; j++) {
					permutation[j] = 1;
				}
				//shuffle(permutation.begin(), permutation.end(), rng);

				for(auto u: permutation) cout << u;
				cout << endl;
			}
			cin >> n;
		}

		if(!cor) break;
	}
	return 0;
}
