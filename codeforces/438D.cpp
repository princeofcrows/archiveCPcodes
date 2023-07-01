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

struct treeNode {
	int max;
	int sum;
};


int arr[mx];
treeNode tree[mx * 3];

void init(int node, int b, int e){
	if (b == e) {
		tree[node].sum = arr[b];
		tree[node].max = arr[b];
		return;
	}
	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;

	init(Left, b, mid);
	init(Right, mid + 1, e);

	tree[node].sum = tree[Left].sum + tree[Right].sum;
	tree[node].max = max(tree[Left].max, tree[Right].max);
}
int query(int node, int b, int e, int i, int j){
	if (i > e || j < b)
		return 0;
	if (b >= i && e <= j)
		return tree[node].sum;

	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;

	int p1 = query(Left, b, mid, i, j);
	int p2 = query(Right, mid + 1, e, i, j);

	return p1 + p2;
}

int queryMx(int node, int b, int e, int i, int j){
	if (i > e || j < b)
		return 0;
	if (b >= i && e <= j)
		return tree[node].max;

	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;

	int p1 = queryMx(Left, b, mid, i, j);
	int p2 = queryMx(Right, mid + 1, e, i, j);

	return max(p1,  p2);
}

void update(int node, int b, int e, int i, int newvalue){
	if (i > e || i < b)
		return;
	if (b >= i && e <= i) {
		tree[node].sum = newvalue;
		tree[node].max = newvalue;
		return;
	}

	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;

	update(Left, b, mid, i, newvalue);
	update(Right, mid + 1, e, i, newvalue);

	tree[node].sum = tree[Left].sum + tree[Right].sum;
	tree[node].max = max(tree[Left].max, tree[Right].max);
}

map <int, set <int> > mp;

int32_t main(){
	//read();
	//write();
	fst;
	int n, m;
	while(cin >> n >> m) {

		for(int i=1; i<=n; i++) {
			cin >> arr[i];
			mp[arr[i]].insert(i);
		}

		init(1, 1, n);

		while(m--) {
			int t, l, r, x, k;
			cin >> t;

			if(t == 1) {
				cin >> l >> r;
				cout << query(1, 1, n, l, r) << "\n";
			} else if(t == 2) {
				cin >> l >> r >> x;

				while(1) {
					int mxx = queryMx(1, 1, n, l, r);
					if(mxx < x) {
						break;
					}

					int idx = (*mp[mxx].lower_bound(l));

					if(idx > r) {
						break;
					}

					update(1, 1, n, idx, mxx % x);


					mp[mxx].erase(idx);
					mp[mxx % x].insert(idx);

					arr[idx] = mxx % x;
				}
			} else {
				cin >> k >> x;

				mp[arr[k]].erase(k);
				arr[k] = x;
				mp[arr[k]].insert(k);

				update(1, 1, n, k, x);
			}
		}

		mp.clear();
	}
	return 0;
}
