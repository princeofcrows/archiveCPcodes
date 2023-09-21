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

map <string, bool> visited;

bool isPal(string s) {
	return s[0] == s[4] && s[1] == s[3];
}

string addMin(string s, int minS){
	int h = (s[0] - '0') * 10 + (s[1] - '0');
	int m = (s[3] - '0') * 10 + (s[4] - '0');

	m += minS;

	if(m >= 60) {
		h+= (m / 60);
		m %= 60;

		if(h >= 24) {
			h %= 24;
		}
	}

	string nS = "";
	nS += (h / 10) + '0';
	nS += (h % 10) + '0';
	nS += ":";
	nS += (m / 10) + '0';
	nS += (m % 10) + '0';

	return nS;
}

int32_t main(){
	//read();
	//write();
	fst;

	int t;
	cin >> t;

	while(t--) {
		string s; int minS, ans = 0;
		cin >> s >> minS;

		while(!visited[s]) {
			ans += isPal(s);

			visited[s] = true;

			s = addMin(s, minS);

			//cout << s << endl;
		}

		cout << ans << endl;
		visited.clear();
	}
	return 0;
}
