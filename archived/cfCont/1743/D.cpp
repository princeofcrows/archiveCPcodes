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

int ara[mx];
string str;

int32_t main(){
	//read();
	//write();
	fst;
	int n;

	while(cin >> n) {
		cin >> str;
		string a = "", b = "";

		bool start = false;

		for(auto ch: str) {
			if(ch == '1') start = true;

			if(start) a += ch;
		}

		if(a == "") {
			cout << "0\n";
			continue;
		}

		int m_x = 0;
		b = a;

		for(int j=0; j<500; j++) {
			string c = "";
			int cnt = 0;

			for(int i=0; i<a.length(); i++) {
				if(i-j >= 0)  {
					c += (char) (((a[i] - '0') || (a[i-j] - '0')) + '0');
				} else {
					c += a[i];
				}
			}

			for(int i=0; i<a.length(); i++) {
				if(a[i] == '0') {
					if(c[i] == '0') break;
					cnt++;
				}
			}

			if(cnt > m_x) {
				m_x = cnt;
				b = c;
			}

			if(a[j] == '0') break;
		}

		cout << b << "\n";

	}
	return 0;
}
