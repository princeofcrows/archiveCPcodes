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
#define rev_all(v) reverse(all(v));
#define mem(ara, x) memset(ara, x, sizeof ara)

// Const
#define mod 1000000007
#define inf 1e18+19
#define mx 500015
#define pi acos(-1.0)
#define seed 997

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
	return N=N | (1LL<<pos);
}
int reset(int N,int pos){
	return N= N & ~(1LL<<pos);
}
bool check(int N,int pos){
	return (bool)(N & (1LL<<pos));
}

void yes() {
	cout << "YES\n";
}

void no() {
	cout << "NO\n";
}

int ara[mx], cnt[66];

long long binPowRec(long long a, long long b) {
	if(b < 0) return 0;
	if (b == 0) return 1;

	long long res = binPowRec(a, b / 2);

	if (b % 2) {
		res = (res * a) % mod;
	}

	return (res * res) % mod;
}

int32_t main(){
	//rin();
	//wrout();
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n, bitNum = 62;
		cin >> n;

		mem(cnt, 0LL);
		for(int i=0; i<n; i++) {
			cin >> ara[i];

			for(int j=0; j<bitNum; j++) {
				cnt[j] += ((int) check(ara[i], j));
			}
		}

		int ans = 0;
		for(int i=0; i<n; i++) {
			int andSum = 0, orSum = 0;
			for(int j=0; j<bitNum; j++) {
				int x = (1LL << j) % mod;

				if(check(ara[i], j)) {
					andSum = (andSum + x * cnt[j])% mod;
					orSum = (orSum + (x * n)) % mod;
				} else {
					orSum = (orSum + cnt[j] * x) % mod;
				}
			}
			//cout << i << " " <<  andSum << " " << orSum << endl;

			ans = (andSum * orSum + ans)% mod;
		}

		cout << ans << endl;
	}
	return 0;
}
