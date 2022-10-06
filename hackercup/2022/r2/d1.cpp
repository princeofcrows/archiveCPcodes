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


int arr[3][mx], ara[mx];
int tree[3][mx * 4];

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


int solve(int n, int z) {
	int a1 = query(1, 1, n, 1, z, 0);
	int a2 = query(1, 1, n, z+1, n, 0);

	int b1 = query(1, 1, n, 1, z, 1);
	int b2 = query(1, 1, n, z+1, n, 1);

	int c1 = query(1, 1, n, 1, z, 2);
	int c2 = query(1, 1, n, z+1, n, 2);

	int t1 = a1 + b1 + c1, t2 = a2 + b2 + c2;

	if(t1 >= t2) {

	}
}

int32_t main(){
	read();
	write();
	fst;


	int t, cs = 1;
	cin >> t;

	while(t--) {
		int n, ans = 0, m;

		cin >> n >> m;
		mem(arr, 0);

		for(int i=0; i<n; i++) {
			cin >> ara[i+1];
			arr[i+1][ara[i+1]-1] = 1;
		}

		init(1, 1, n, 0);
		init(1, 1, n, 1);
		init(1, 1, n, 2);

		int q;
		cin >> q;

		while(q--) {
			int x, y, z;
			cin >> x >> y >> z;
			update(1, 1, n, x, 0, ara[x]-1);
			ara[x] = y;
			update(1, 1, n, x, 1, y-1);

			ans += solve(n, z);
		}

		cout << "Case #" << cs++ <<": " << ans <<  "\n";
	}

	return 0;
}
