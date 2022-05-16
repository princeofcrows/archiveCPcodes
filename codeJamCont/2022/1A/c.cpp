#include <bits/stdc++.h>

using namespace std;

#define mx 400005
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

int e, w;
int st[110][110];

void solve(int idx, string s){
	std::vector<int> v;
	for(int i=0; i<3; i++) {
		v.pb(i);
	}


}

int32_t main(){
	//read();
	//write();
	//fst;
	int t, cs = 1;
	cin >> t;

	while(t--) {
		cin >> e >> w;
		for(int i=0; i<e; i++) {
			for(int j=0; j<w; j++) {
				cin >> st[i][j];
			}
		}
		cout << "Case #" << cs++ <<": ";
		solve(0, "");

	}
	return 0;
}
