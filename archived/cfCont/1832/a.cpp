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

int32_t main(){
	//read();
	//write();
	fst;

	int q;
	cin >> q;

	while(q--) {
		string str;
		cin >> str;

		vector <int> v(26, 0);
		int cnt = 0, n = str.length();
		set <char> s;

		for(auto u: str) {
			v[u-'a']++;
			s.insert(u);
		}

		for(int i=0; i<26; i++) {
			cnt += (v[i] % 2);
		}

		int charNum = s.size();
		bool flag = (cnt == (n % 2));

		if(charNum == 1 ||
		   (n % 2 && v[str[n / 2]-'a'] == 1
		    && charNum == 2)
		   ) flag = false;

		cout << ( flag ? "Yes" : "No") << endl;

	}

	return 0;
}
