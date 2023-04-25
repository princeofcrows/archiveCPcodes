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

string str;
int mat[26][26];

int32_t main(){
	//read();
	//write();
	fst;

	int q;
	cin >> q;

	while(q--) {
		int n;
		cin >> n >> str;

		if(n%2) {
			cout << -1 << "\n";
		} else {
			mem(mat, 0);

			for(int i=n-1, j=0; i>j; i-=1, j+=1) {
				mat[str[j] - 'a'][str[i] - 'a']++;
			}

			std::vector<pii> v;
			int tot = 0;

			for(int i=0; i<26; i++) {
				if(mat[i][i]) {
					v.pb({mat[i][i], i});
					tot += mat[i][i];
				}
			}

			if(tot == 0) {
				cout << 0 << "\n";
				continue;
			}

			sort(v.rbegin(), v.rend());

			if(v[0].fi > tot - v[0].fi) {
				int rest = (2*v[0].fi - tot);
				int ra = rest;

				for(int i=0; i<26; i++) {
					for(int j=0; j<26; j++) {
						if(i == v[0].se || j == v[0].se) continue;
						if(i == j) continue;
						rest -= mat[i][j];
					}
				}

				if(rest > 0) cout << -1;
				else cout <<(tot-ra+1)/2 + ra;

			} else {
				//cout << "oh no \n" << str << endl;
				cout << (tot + 1)/ 2;
			}

			cout << "\n";
		}

	}

	return 0;
}
