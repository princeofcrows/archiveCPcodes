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

int ara[mx];

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	cin >> t;
	while(t--) {
		string s[2];
		set <char> st;

		cin >> s[0] >> s[1];

		st.insert(s[0][0]);
		st.insert(s[0][1]);
		st.insert(s[1][0]);
		st.insert(s[1][1]);

		printf("%d\n", ((int) (st.size() - 1)));
	}
	return 0;
}
