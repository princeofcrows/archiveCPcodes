#include <bits/stdc++.h>

using namespace std;

#define mx 1000005
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
#define read() freopen("perfectly_balanced_chapter_2_input.txt", "r", stdin)
#define write() freopen("perfectly_balanced_chapter_2_output.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int ara[mx], sa[2][mx];
int seed = 997, seed2 = 613;

set <int> st[2];

int arr[2][mx];
int tree[2][mx * 4];

void init(int node, int b, int e, int idx){
	if (b == e) {
		tree[idx][node] = arr[idx][b] % mod;
		return;
	}
	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;
	init(Left, b, mid, idx);
	init(Right, mid + 1, e, idx);
	tree[idx][node] = (tree[idx][Left] + tree[idx][Right]) % mod;
}
int query(int node, int b, int e, int i, int j, int idx){
	if (i > e || j < b)
		return 0;
	if (b >= i && e <= j)
		return tree[idx][node];
	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;
	int p1 = query(Left, b, mid, i, j, idx);
	int p2 = query(Right, mid + 1, e, i, j, idx);
	return (p1 + p2) % mod;
}
void update(int node, int b, int e, int i, int newvalue, int idx){
	if (i > e || i < b)
		return;
	if (b >= i && e <= i) {
		tree[idx][node] = newvalue;
		return;
	}
	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;
	update(Left, b, mid, i, newvalue, idx);
	update(Right, mid + 1, e, i, newvalue, idx);
	tree[idx][node] = (tree[idx][Left] + tree[idx][Right]) % mod;
}

void gen() {
	sa[0][0] = sa[1][0] = 1;

	for(int i=1; i<mx; i++) {
		sa[0][i] = (sa[0][i-1] * seed) % mod;
		sa[1][i] = (sa[1][i-1] * seed2) % mod;
		//if(st.count(sa[i])) cout <<"ye" << endl;
		st[0].insert(sa[0][i]);
		st[1].insert(sa[1][i]);
	}
}

void initData(int n) {
	for(int i=0; i<n; i++ ) {
		arr[0][i+1] = sa[0][ara[i]];
		arr[1][i+1] = sa[1][ara[i]];
	}

	mem(tree, 0);

	init(1, 1, n, 0);
	init(1, 1, n, 1);
}

int solve(int l, int r, int n) {
	int diff = r - l + 1;


	if(diff % 2 == 0) return 0;
	if(diff == 1) return 1;

	int m = (l + diff / 2);

	int a = query(1, 1, n, l, m, 0);
	int b = query(1, 1, n, m+1, r, 0);
	int c = (a - b + mod)% mod;

	int a2 = query(1, 1, n, l, m, 1);
	int b2 = query(1, 1, n, m+1, r, 1);
	int c2 = (a2 - b2 + mod)% mod;

	if(st[0].count(c) && st[1].count(c2)) return 1;

	a = query(1, 1, n, l, m-1, 0);
	b = query(1, 1, n, m, r, 0);
	c = (b - a + mod)% mod;

	a2 = query(1, 1, n, l, m-1, 1);
	b2 = query(1, 1, n, m, r, 1);
	c2 = (b2 - a2 + mod)% mod;

	if(st[0].count(c) && st[1].count(c2)) return 1;

	return 0;

}

int32_t main(){
	read();
	write();
	fst;

	gen();

	int t, cs = 1;
	cin >> t;

	while(t--) {
		int n, ans = 0;

		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> ara[i];
		}

		initData(n);

		int q;
		cin >> q;

		while(q--) {
			int tp, l, r;
			cin >>  tp >> l >> r;

			if(tp == 1) {
				update(1, 1, n, l, sa[0][r], 0);
				update(1, 1, n, l, sa[1][r], 1);
			} else {
				ans += solve(l, r, n);
			}

		}

		cout << "Case #" << cs++ <<": " << ans <<  "\n";
	}

	return 0;
}
