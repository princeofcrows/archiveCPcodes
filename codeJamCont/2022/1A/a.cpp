#include <bits/stdc++.h>

using namespace std;

#define mx 400005
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

string s;
set <int> st;

void solve(){
	for(int i=0; i<s.length() - 1; i++) {
		for(int j=i+1; j<s.length(); j++) {
			if(s[i] < s[j]) {
				st.insert(i);
				break;
			} else if(s[i] > s[j]) {
				break;
			}
		}

	}

	for(int i=0; i<s.length(); i++) {
		if(st.count(i)) {
			cout << s[i] << s[i];
		} else {
			cout << s[i];
		}
	} cout << endl;
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t, cs = 1;
	cin >> t;

	while(t--) {
		cin >> s;
		cout << "Case #" << cs++ <<": ";
		solve();
		st.clear();
	}
	return 0;
}
