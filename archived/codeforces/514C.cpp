#include <bits/stdc++.h>

using namespace std;

#define mx 600005
#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 92939220289
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

map <int, bool> hashMap[mx];
int seed = 509;

int getHash(string s) {
	int base = 1, value = 0;

	for(auto ch: s) {
		value = (value + ch * base) % mod;
		base = (base * seed) % mod;
	}

	return value;
}

bool check(string t) {
	int base = 1;
	int hashValue = getHash(t);

	for(auto ch: t) {
		int value = (hashValue - (ch * base) % mod + mod) % mod;

		for(char r='a'; r<='c'; r++) {
			if(r == ch) continue;

			int replacedValue = (value + r * base) % mod;

			if(hashMap[t.length()][replacedValue]) return true;
		}

		base = (base * seed) % mod;
	}

	return false;
}

int32_t main(){
	//read();
	//write();
	fst;
	int n, m;

	while(cin >> n >> m) {
		for(int i=0; i<n; i++) {
			string s;
			cin >> s;

			hashMap[s.length()][getHash(s)] = true;
		}

		while(m--) {
			string t;
			cin >> t;

			cout << (check(t) ? "YES" : "NO")  << endl;
		}
	}
	return 0;
}
