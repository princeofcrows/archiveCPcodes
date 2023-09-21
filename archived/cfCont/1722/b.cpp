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
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n; string s[2];
		cin >> n >> s[0] >> s[1];

		for(int i=0; i<2; i++) {
			for(int j=0; j<n; j++) {
				if(s[i][j] == 'B') s[i][j] = 'G';
			}
		}

		cout << (s[0] == s[1] ? "YES\n" : "NO\n");
	}
	return 0;
}
