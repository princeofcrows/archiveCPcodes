#include <bits/stdc++.h>

using namespace std;

#define mx 400005
#define int long long
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

int b_s(int x) {
	int l = 0, h = mod;

	while(l <= h) {
		int m = (l + h) / 2;
		int c_x = (m * (m + 1) ) / 2;

		if(c_x <= x) {
			l = m + 1;
		} else {
			h = m - 1;
		}
	}

	return h;
}

int b_s_e(int x, int s) {
	int l = 0, h = mod;

	while(l <= h) {
		int m = (l + h) / 2;
		int c_x = ((m+s) * (m + 1 + s) ) - s*(s+1);

		if(c_x <= x) {
			l = m + 1;
		} else {
			h = m - 1;
		}
	}

	return h;
}

int b_s_o(int x, int s) {
	int l = 0, h = mod;

	while(l <= h) {
		int m = (l + h) / 2;
		int c_x = ((m+s) * (m+s)) - s*s;

		if(c_x <= x) {
			l = m + 1;
		} else {
			h = m - 1;
		}
	}

	return h;
}

void solve(int l, int r) {
	int dif = llabs(l - r);
	int n = b_s(dif);
	//cout << n << endl;

	if(l > r) {
		l -= (n*(n+1)) / 2;
	} else if(r > l) {
		r -= (n*(n+1)) / 2;
	}

	if(l >= r) {
		if(n%2) {
			int s = n / 2;
			int nl = b_s_e(l, s);
			l -= ((nl+s) * (nl+s + 1)) - s*(s+1);

			s = (n + 1)/2;
			int nr = b_s_o(r, s);
			r -= ((nr+s) * (nr+s)) - s*s;

			n += (nl + nr);
		}
		else{
			int s = (n + 1)/2;
			int nl = b_s_o(l, s);
			l -= ((nl+s) * (nl+s)) - s*s;

			s = n / 2;
			int nr = b_s_e(r, s);
			r -= ((nr+s) * (nr+s + 1)) - s*(s+1);

			n += (nl + nr);
		}
	} else {
		if(n%2) {
			int s = (n + 1)/2;
			int nl = b_s_o(l, s);
			l -= ((nl+s) * (nl+s)) - s*s;

			s = n / 2;
			int nr = b_s_e(r, s);
			r -= ((nr+s) * (nr+s + 1)) - s*(s+1);
			n += (nl + nr);
		}
		else{

			int s = n / 2;
			int nl = b_s_e(l, s);
			l -= ((nl+s) * (nl+s + 1)) - s*(s+1);

			s = (n + 1)/2;
			int nr = b_s_o(r, s);
			r -= ((nr+s) * (nr+s)) - s*s;

			n += (nl + nr);

		}
	}

	cout << n << " " << l << " " << r << endl;
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t, cs = 1;
	cin >> t;

	while(t--) {
		int L, R;
		cin >> L >> R;

		cout << "Case #" << cs++ <<": ";

		solve(L, R);
	}
	return 0;
}
