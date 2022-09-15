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

string str[3][1005];

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		map <string, int> mp;
		for(int i=0; i<3; i++) {
			for(int j=0; j<n; j++) {
				cin >> str[i][j];
				mp[str[i][j]]++;
			}
		}

		int ans[] = {0, 0, 0};
		for(int i=0; i<3; i++) {
			for(int j=0; j<n; j++) {
				ans[i] += (3 - mp[str[i][j]]);

				if(mp[str[i][j]] == 1) ans[i]++;
			}

			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
