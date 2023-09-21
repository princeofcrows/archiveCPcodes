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

int ara[mx];



int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> ara[i];
		}

		string str;
		cin >> str;

		map <int, char> mp;
		bool f = true;

		for(int i=0; i<n; i++) {
			if(mp[ara[i]] && mp[ara[i]] != str[i]) {
				f = false;
				break;
			}

			mp[ara[i]] = str[i];
		}

		cout << (f ? "YES\n" : "NO\n");
	}
	return 0;
}
