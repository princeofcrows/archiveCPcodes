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

int c[105], p[105], s[105][105];


int32_t main(){
	rin();
	//wrout();
	fst;
	int n, m;

	while(cin >> n >> m) {
		double res = inf;
		fr(i, 0, n) {
			cin >> c[i] >> p[i];
			s[i] = 0;

			fr(j, 0, p[i]) {

				cin >> x;
				s[i] += x;
			}

			double cur[m+4];
			mem(cur, 0.0);

			fr(j, 0, m) {
				fr(l, 0, p[i]) {
					int nxt = min(m, )
				}
			}

			res = min(res, cur[m]);
		}

		cout << fixed;
		cout << setprecision(10) << res << endl;
	}
	return 0;
}
