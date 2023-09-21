#include <bits/stdc++.h>

using namespace std;

// Data type
//#define int long long
#define ll long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define msi map<string, int>
#define si set<int>

// Method or var shorthands
#define fi first
#define se second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define sort_all(v) sort(all(v));
#define rev_all(v) rev(all(v));
#define mem(ara, x) memset(ara, x, sizeof ara)

// Const
#define mod 1000000007
#define inf 1e18+19
#define mx 200015
#define pi acos(-1.0)

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

void yes() {
	cout << "YES\n";
}

void no() {
	cout << "NO\n";
}

pii edge[2005];
int ara[2005];

void construct(vi v, int n, int ec) {
	for(auto u: v) {
		cout << "? " << u << endl;

		ifr(i, 1, n) {
			cin >> ara[i];
			if(ara[i] == 1) {
				edge[ec++] = {u, i};
			}
		}
	}
}

void print(int n) {
	cout << "!" << endl;

	fr(i, 0, n-1) cout << edge[i].fi << " " << edge[i].se << endl;
}

void solve(int n) {
	int cnt[] = {0, 0};
	vi v[2]; int ec = 0;

	cout << "? 1" << endl;

	ifr(i, 1, n) {
		cin >> ara[i];

		if(ara[i] == 0) continue;

		cnt[ara[i] % 2]++;
		v[ara[i] % 2].pb(i);

		if(ara[i] == 1) {
			edge[ec++] = {1, i};
		}
	}

	if(cnt[0] <= cnt[1]) construct(v[0], n, ec);
	else construct(v[1], n, 0);

	print(n);
}

int32_t main(){
	//rin();
	//wrout();
	//fst;

	int n;
	cin >> n;
	solve(n);
	return 0;
}
