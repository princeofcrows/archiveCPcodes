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

bool isKey(char c) {
	return (c >= 'a' && c <= 'z');
}

int main(){
	//read();
	//write();
	//fst;
	int t;
	cin >> t;

	while(t--) {
		string str;
		cin >> str;

		map <char, bool> mp;
		bool f = true;

		for(auto u: str) {
			if(isKey(u)) {
				mp[(u - 'a' + 'A')] = true;
			} else {
				f &= mp[u];
			}
		}

		cout << (f ? "YES" : "NO") << endl;
	}
	return 0;
}
