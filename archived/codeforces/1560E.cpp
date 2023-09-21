#include <bits/stdc++.h>

using namespace std;

#define mx 200015
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

string org;

int c2n(char c) {
	return c - 'a';
}

string cons(string og, string od) {
	string res = og;
	vector <bool> vis(26, false);

	for(auto v: od) {
		vis[c2n(v)] = true;
		for(auto u: og) {
			if(vis[c2n(u)]) continue;
			res += u;
		}
	}

	return res;
}

void solve() {
	int n = org.length();
	int alp[26];
	mem(alp, 0);

	string ord, con;
	for(int i=n-1; i>=0; i--) {
		if(!alp[c2n(org[i])]) {
			ord += org[i];
			alp[c2n(org[i])] = 1;
		}
	}


	reverse(ord.begin(), ord.end());
	bool isPos = false;
	mem(alp, 0);

	//cout << ord << endl;

	for(int i=0; i<n; i++) {
		con += org[i];
		alp[c2n(org[i])]++;

		int tot = i+1, co = i + 1;
		for(auto u: ord) {
			co -= alp[c2n(u)];
			tot += co;
		}

		if(tot == n) {
			string test = cons(con, ord);

			if(test == org) {
				cout << con << " " << ord << "\n";

				isPos = true;
			}

			break;
		}
	}

	if(!isPos) cout << "-1\n";
}

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		cin >> org;

		solve();
	}
	return 0;
}
