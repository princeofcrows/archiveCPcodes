#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

string g[105];
int res[105];

int check(int n, int m, int x){
	int ans = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(g[i][j] == '#') {
				bool flag = true;

				for(int l=1; l<=x; l++) {
					if(i + l >= n || i - l < 0 || j + l >= m || j - l < 0) {
						flag = false;
						break;
					}

					if(g[i+l][j+l] != '#' ||
					   g[i-l][j+l] != '#' ||
					   g[i+l][j-l] != '#' ||
					   g[i-l][j-l] != '#') {
						flag = false;
						break;
					}
				}

				if(flag) {
					ans++;
				}
			}

		}
	}

	return ans;
}

int32_t main(){
	//read();
	//write();
	fst;
	int n, m;
	while(cin >> n >> m) {
		for(int i=0; i<n; i++) {
			cin >> g[i];
		}

		for(int i=1; i<=min(n, m); i++) {
			res[i] = check(n, m, i);
		}

		for(int i=1; i<=min(n, m); i++) {
			cout << res[i] - res[i+1] << " ";
		}
		cout << "\n";
	}
	return 0;
}
