#include <bits/stdc++.h>

using namespace std;

#define mx 200005
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

int seed = 5623;

vector<int> prefixFunction(string s) {
	int n = (int)s.length();

	vector<int> pi(n);

	for (int i = 1; i < n; i++) {
		int j = pi[i-1];

		while (j > 0 && s[i] != s[j])
			j = pi[j-1];

		if (s[i] == s[j])
			j++;

		pi[i] = j;
	}

	return pi;
}

vector<int> kmpPatternSearch(string p, string s){
	int m = p.length();
	int n = s.length();

	vector<int> pi = prefixFunction(p);
	vector<int> res;

	int i = 0;
	int j = 0;

	while (i < n) {
		if (p[j] == s[i]) {
			j++; i++;
		}

		if (j == m) {
			res.push_back(i - j);
			j = pi[j - 1];
		} else if (i < n && p[j] != s[i]) {
			if (j != 0)
				j = pi[j - 1];
			else
				i = i + 1;
		}
	}

	return res;
}

int32_t main(){
	//read();
	//write();
	fst;
	string t, se, sb;
	while(cin >> t >> sb >> se) {
		vector <int> b = kmpPatternSearch(sb, t);
		vector <int> e = kmpPatternSearch(se, t);

		int ans = 0;

		map<int, int> mp[2002];
		for(int i=0; i<b.size(); i++) {
			int u = b[i];

			int hash = 0, base = 1;
			int l = lower_bound(e.begin(), e.end(), u) - e.begin();

			for(int j=u; j<t.size(); j++) {
				hash = (hash + base * t[j]) % mod;
				base = (base * seed) % mod;

				if(l >= e.size()) break;
				if(j == e[l] + se.size() - 1) {
					if(j >= u + sb.length() - 1) {
						int len = j - u + 1;
						if(!mp[len][hash]) ans++;
						mp[len][hash] = 1;
					}
					l++;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}
