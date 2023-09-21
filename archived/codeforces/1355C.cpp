#include <bits/stdc++.h>

using namespace std;

// Data type
#define int long long
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

int32_t main(){
	//rin();
	//write();
	fst;
	int a, b, c, d;
	while(cin >> a >> b >> c >> d) {
		int ans = 0;
		int x1 = a, x2 = b;
		int y1 = b, y2 = c;
		int z1 = c, z2 = d;

		ifr(x, x1, x2) {
			int ys = z1 - x + 1;
			int y1_0 = y1, z1_0 = z1;

			if(ys < y1) {
				int zoff = min(y1 - ys, z2 - z1 + 1);
				ans += (zoff * (y2 - y1 +1));

				z1_0 = z1 + zoff;
				if(z1_0 > z2) continue;
				// cout << "zoff " << zoff << endl;
			} else {
				y1_0 = ys;

				if(y1_0 > y2) continue;
			}

			int yr = y2 - y1_0 + 1;
			int zr = z2 - z1_0 + 1;

			int mr = min(yr, zr);
			int tot = yr * mr - mr * (mr - 1) / 2;

			ans += (tot);

			// cout << " \nx " << x
			//      << " \nmr "  << mr
			//      << " \ny1 " << y1_0
			//      << " \nyr " << yr
			//      << " \ntot " << tot << endl;
		}
		cout << ans << endl;
	}
	return 0;
}
