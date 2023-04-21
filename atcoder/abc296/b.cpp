// Unsolved

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

string ch[8];

int32_t main(){
	//read();
	//write();
	fst;

	for(int i=7; i>=0; i--) cin >> ch[i];

	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if(ch[i][j] == '*') {
				cout << (char ( j + 'a')) << i + 1 << endl;
			}
		}
	}

	return 0;
}
