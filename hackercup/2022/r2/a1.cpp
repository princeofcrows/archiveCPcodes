#include <bits/stdc++.h>

using namespace std;

#define mx 1000005
#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 135118961
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("perfectly_balanced_chapter_1_input.txt", "r", stdin)
#define write() freopen("perfectly_balanced_chapter_1_output.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

string str;
int cnt[mx][26];

void init() {
	int n = str.length();

	for(int j=0; j<26; j++) {
		cnt[0][j] = 0;
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<26; j++) {
			cnt[i+1][j] = 0;
		}

		cnt[i + 1][str[i] - 'a'] = 1;

		for(int j=0; j<26; j++) {
			cnt[i+1][j] += cnt[i][j];
		}
	}
}

int solve(int l, int r) {
	int diff = r - l + 1;


	if(diff % 2 == 0) return 0;
	if(diff == 1) return 1;

	int m = (l + diff / 2), f1 = 0, f2 = 0;

	for(int j=0; j<26; j++) {
		int a = cnt[m][j] - cnt[l-1][j];
		int b = cnt[r][j] - cnt[m][j];

		if(b == a) continue;

		if(a - b == 1) {
			f1++;
		} else {
			f1 =  -1;
			break;
		}
	}

	if(f1 == 1) return 1;

	for(int j=0; j<26; j++) {
		int a = cnt[m-1][j] - cnt[l-1][j];
		int b = cnt[r][j] - cnt[m-1][j];

		if(b == a) continue;

		if(b - a == 1) {
			f2++;
		} else {
			f2 =  -1;
			break;
		}
	}

	if(f2 == 1) return 1;

	return 0;
}

int32_t main(){
	read();
	write();
	fst;
	int t, cs = 1;
	cin >> t;
	while(t--) {
		int q, ans = 0;

		cin >> str >> q;
		init();

		while(q--) {
			int l, r;
			cin >> l >> r;

			ans += solve(l, r);
		}

		cout << "Case #" << cs++ <<": " << ans<<  "\n";
	}

	return 0;
}
