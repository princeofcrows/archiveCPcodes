#include <bits/stdc++.h>

using namespace std;

#define mx 500005
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

string s1, s2, v;
int dp[102][102][102];
int pre[26][102];

int rec(int i, int j, int l) {
	if(i >= s1.length() || j >= s2.length()) return 0;
	if(dp[i][j][l] != -1) return dp[i][j][l];

	int ret = 0;
	if(s1[i] == s2[j]) {
		if(v[l] == s1[i]) {
			if(l + 1 != v.length()) {
				ret = rec(i+1, j+1, l+1) + 1;
			}
		} else {
			ret = rec(i+1, j+1, pre[s1[i] - 'A'][l]) + 1;
		}
	}

	ret = max(rec(i+1, j, l), ret);
	ret = max(rec(i, j+1, l), ret);

	return dp[i][j][l] = ret;
}

string res;

void recons(int i, int j, int l, int ans) {
	if(i >= s1.length() || j >= s2.length()) return;
	if(ans == 0) return;

	int ret = 0;
	if(s1[i] == s2[j]) {
		if(v[l] == s1[i]) {
			if(l + 1 != v.length()) {
				ret = rec(i+1, j+1, l+1) + 1;
				if(ret == ans) {
					res += s1[i];
					recons(i+1, j+1, l+1, ans - 1);
					return;
				}
			}
		} else {
			ret = rec(i+1, j+1, pre[s1[i] - 'A'][l]) + 1;
			if(ret == ans) {
				res += s1[i];
				recons(i+1, j+1,pre[s1[i] - 'A'][l], ans -1);
				return;
			}
		}
	}

	int ret1 = rec(i+1, j, l);
	int ret2 = rec(i, j+1, l);

	if(ret1 == ans) {
		recons(i+1, j, l, ans);
	} else if(ret2 == ans ) {
		recons(i, j+1, l, ans);
	}
}

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

void preCacl(string s) {
	s += '#';
	int n = s.size();

	vector<int> pi = prefixFunction(s);

	for (int i = 0; i < n; i++) {
		for (int c = 0; c < 26; c++) {
			if (i > 0 && 'A' + c != s[i])
				pre[c][i] = pre[c][pi[i-1]];
			else
				pre[c][i] = i + ('A' + c == s[i]);
		}
	}

}

void solve() {
	mem(dp, -1);
	preCacl(v);
	int ans = rec(0, 0, 0);
	if(ans ==0) {
		cout << 0 << endl;
		return;
	}
	res = "";
	recons(0, 0, 0, ans);

	//cout << ans << endl;
	cout << res << endl;
}

int32_t main(){
	//read();
	//write();
	fst;

	while(cin >>s1 >> s2 >> v) {
		solve();
	}
	return 0;
}
