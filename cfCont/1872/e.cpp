#include <bits/stdc++.h>

using namespace std;

// Data type
//#define int long long
#define ll long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pii>
#define mii map<int, int>
#define msi map<string, int>
#define si set<int>
#define spi set<pii>

// Method or var shorthands
#define fi first
#define se second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define sort_all(v) sort(all(v));
#define rev_all(v) reverse(all(v));
#define mem(ara, x) memset(ara, x, sizeof ara)

// Const
#define mod 1000000007
// 28722900390631
#define inf 1e18+19
#define mx 100015
#define pi acos(-1.0)
#define seed 997
// 769 919 647 839

// Input Output
#define sild(x) scanf("%lld", &x)
#define sid(x) scanf("%d", &x)
#define rin() freopen("in.txt", "r", stdin)
#define wrout() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Loops
#define fr(i,s,e) for(int i=s; i<e; i++)
#define ifr(i,s,e) for(int i=s; i<=e; i++)
#define rfr(i,e,s) for(int i=e-1; i>=s; i--)

// Functions
ll gcd(ll a,ll b) {
	if (b==0) return a; return gcd(b, a%b);
}

ll lcm(ll a,ll b) {
	return a/gcd(a,b)*b;
}

int Set(int N,int pos){
	return N=N | (1<<pos);
}
int reset(int N,int pos){
	return N= N & ~(1<<pos);
}
bool check(int N,int pos){
	return (bool)(N & (1<<pos));
}

void yes() {
	cout << "YES\n";
}

void no() {
	cout << "NO\n";
}

struct treeNode {
	int prop;
	int sum;
};

treeNode tree[2][mx*10];
int arr[mx];
string str;

void update(int node, int b, int e, int i, int j, int val, int idx){
	if(tree[idx][node].prop!=0) {
		tree[idx][node].prop = 0;
		tree[1 - idx][node].prop = 0;

		swap(tree[idx][node].sum, tree[1 - idx][node].sum);
		if(b!=e) {
			tree[idx][node*2].prop ^= 1;
			tree[idx][node*2+1].prop ^= 1;

			tree[1 - idx][node*2].prop ^= 1;
			tree[1 - idx][node*2+1].prop ^= 1;
		}
	}
	if (i > e || j < b)
		return;
	if (b >= i && e <= j) {
		swap(tree[idx][node].sum, tree[1 - idx][node].sum);
		if(b!=e) {
			tree[idx][node*2].prop ^= 1;
			tree[idx][node*2+1].prop ^= 1;

			tree[1 - idx][node*2].prop ^= 1;
			tree[1 - idx][node*2+1].prop ^= 1;
		}
		return;
	}
	int Left = node * 2;
	int Right = (node * 2) + 1;
	int mid = (b + e) / 2;
	update(Left, b, mid, i, j, val, idx);
	update(Right, mid + 1, e, i, j, val, idx);
	tree[idx][node].sum = tree[idx][Left].sum ^ tree[idx][Right].sum;
	tree[1- idx][node].sum = tree[1 - idx][Left].sum ^ tree[1 - idx][Right].sum;
}


void init(int node, int b, int e, int idx){
	tree[idx][node].prop = 0;
	if (b == e) {
		if((str[b-1]- '0') == idx) {
			tree[idx][node].sum = arr[b];
		} else {
			tree[idx][node].sum = 0;
		}
		return;
	}
	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;
	init(Left, b, mid, idx);
	init(Right, mid + 1, e, idx);
	tree[idx][node].sum = tree[idx][Left].sum ^ tree[idx][Right].sum;
}

void clean(int n) {
	fr(i, 0, 10*n+5) {
		tree[0][i].sum = 0;
		tree[1][i].sum = 0;

		tree[0][i].prop = 0;
		tree[1][i].prop = 0;
	}
}

int32_t main(){
	//rin();
	//wrout();
	fst;
	int t;
	cin >> t;
	while (t--) {
		int n, q;

		cin >> n;

		ifr(i, 1, n) {
			cin >> arr[i];
		}

		cin >> str;

		clean(n);

		init(1, 1, n, 0);
		init(1, 1, n, 1);

		cin >> q;

		while(q-- ) {
			int tp;
			cin >> tp;

			if(tp == 1) {
				int l, r;
				cin >> l >> r;
				update(1, 1, n, l, r, 0, 0);
			} else {
				int g;
				cin >> g;
				cout << tree[g][1].sum << " ";
			}
		}

		cout << "\n";
	}

}
