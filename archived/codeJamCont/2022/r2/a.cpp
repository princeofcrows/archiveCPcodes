#include <bits/stdc++.h>

using namespace std;

#define mx 400005
//#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 2000000000
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int sh(int x, int y, int n) {
	int des = (n + 1) / 2;
	return abs(des - x) + abs(des - y);
}

void solve(int n, int k) {
	if(k < n -1) {
		printf("IMPOSSIBLE\n");
		return;
	}

	int x = 1, y = 1, dx = 1, dy = 1, ix = 1, val = 1, cnt = 0;
	int limxh = n, limyh = n, limxl = 1, limyl = 2;
	bool isInSh = false;
	int lv = -1, lx = -1, ly = -1;

	std::vector<pii> v;

	while(val != n*n + 1) {
		if(!isInSh) {
			if(sh(x, y, n) == (k - cnt)) {
				isInSh = true;
				lv = val;
				lx = x, ly = y;
			}
		}

		if(isInSh) {
			if(abs(x -lx) + abs(y - ly) == 1) {
				//cout << x << " " << y << endl;
				if(sh(x, y, n) == (k - cnt - 1)) {
					if(val != lv + 1) {
						v.pb({lv, val});
					}
					lv = val;
					lx = x, ly = y;
					cnt++;
				}
			}
		}

		//cout << val << " " << x << " " << y << endl;;

		val++;
		if(!isInSh) cnt++;

		if(ix) {
			x += dx;
			if(x == limxh && dx == 1) {
				dx *= -1;
				ix = 0;
				limxh--;
			} else if(limxl == x && dx == -1) {
				limxl++;
				dx *= -1;
				ix = 0;
			}
		} else {
			y += dy;
			if(y == limyh && dy == 1) {
				dy *= -1;
				ix = 1;
				limyh--;
			} else if(limyl == y && dy == -1) {
				limyl++;
				dy *= -1;
				ix = 1;
			}
		}
	}

	if(v.size() == 0) {
		printf("IMPOSSIBLE\n");
	} else {
		printf("%d\n", ((int) v.size()) );
		for(auto u: v) {
			printf("%d %d\n", u.fi, u.se);
		}
	}
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t, cs = 1;
	si(t);

	while(t--) {
		int n, k;
		si(n); si(k);

		cout << "Case #" << cs++ <<": ";
		solve(n, k);
	}
	return 0;
}
