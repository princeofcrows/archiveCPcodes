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
#define mod 28722900390631
#define inf 1e18+19
#define mx 200015
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

string preSufEx(string s) {
	int l = 0, h = s.length() - 1;
	string res = "";

	while(l < h) {
		if(s[l] == s[h]) {
			res += s[l];
			l++;
			h--;
		} else {
			break;
		}
	}

	return res;
}

string prePal(string s, int start, int end) {
	int frHsh = 0, bkHsh = 0, base = 1, len = 0;
	string res = "";

	fr(i, start, end) {
		frHsh = (frHsh + base * s[i]) % mod;
		bkHsh = (bkHsh * seed + s[i]) % mod;
		base = (base * seed) % mod;

		if(frHsh == bkHsh) {
			len = max(len, i - start + 1);
		}
	}

	fr(i, start, start + len) {
		res += s[i];
	}

	return res;
}

string suffPal(string s, int start, int end) {
	int frHsh = 0, bkHsh = 0, base = 1, len = 0;
	string res = "";

	rfr(i, end, start) {
		frHsh = (frHsh + base * s[i]) % mod;
		bkHsh = (bkHsh * seed + s[i]) % mod;
		base = (base * seed) % mod;

		if(frHsh == bkHsh) {
			len = max(len, end - i);
		}
	}

	rfr(i, end, end - len) {
		res += s[i];
	}

	return res;
}

int32_t main(){
	//rin();
	//wrout();
	fst;

	int t;
	cin >> t;

	while(t--) {
		string str;
		cin >> str;

		string preSuf = preSufEx(str);
		int start = preSuf.length(), end = str.length() - start;
		string p = prePal(str, start, end), s = suffPal(str, start, end);

		cout << preSuf;
		cout << (p.length() > s.length() ? p : s);

		rev_all(preSuf);
		cout << preSuf << endl;
	}
	return 0;
}
