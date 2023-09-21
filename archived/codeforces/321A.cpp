#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

int32_t main(){
	//read();
	//write();
	fst;
	int a, b;
	string s;

	while(cin >> a >> b >> s) {
		int _x = 0, _y = 0, x = 0, y = 0;
		bool is_pos = false;

		for(auto ch: s) {
			if(_y == b && _x == a) is_pos = true;

			if(ch == 'U') _y++;
			else if(ch == 'D') _y--;
			else if(ch == 'L') _x--;
			else _x++;
		}

		if(_y == b && _x == a) is_pos = true;

		if(is_pos) {
			cout << "Yes\n";
			continue;
		}

		for(auto ch: s) {
			int m_x = _x == 0 ? 0 : (a - x) / _x;
			int m_y = _y == 0 ? 0 : (b - y) / _y;

			int l_x = _x == 0 ? 0 : (a - x) % _x;
			int l_y = _y == 0 ? 0 : (b - y) % _y;

			if(l_x == 0 && l_y == 0) {
				if(m_x >= 0 && m_y >= 0) {
					int _a = max(m_x, m_y) * _x + x;
					int _b = max(m_x, m_y) * _y + y;
					if(_a == a && _b == b) {
						is_pos = true;
						break;
					}
				}
			}

			if(ch == 'U') y++;
			else if(ch == 'D') y--;
			else if(ch == 'L') x--;
			else x++;
		}

		if(is_pos) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
	return 0;
}
