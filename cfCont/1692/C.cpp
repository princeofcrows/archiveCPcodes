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

string str[10];
std::vector<int> cols[10];

int32_t main(){
	//read();
	//write();
	fst;

	int t;
	cin >> t;

	while(t--) {
		for(int i=0; i<8; i++) {
			cin >> str[i];
			for(int j=0; j<8; j++) {
				if(str[i][j] == '#') {
					cols[i].pb(j);
				}
			}
		}

		for(int i=1; i<7; i++) {
			if(cols[i].size() == 1) {
				if(cols[i-1].size() == 2 && cols[i+1].size() == 2) {
					cout << i + 1 << " "<< cols[i][0]+1 << endl;
					break;
				}
			}
		}

		for(int i=0; i<8; i++) {
			cols[i].clear();
		}
	}
	return 0;
}
