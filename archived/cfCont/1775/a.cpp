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

int cnt[2];

bool isOne(string s) {
	cnt[0] = cnt[1] = 0;

	for(auto u: s) cnt[u-'a']++;

	return cnt[0] == 0 || cnt[1] == 0;
}

void print(string s, int idx) {
	bool done = false;
	for(int i=0; i<s.length(); i++) {
		if(i == idx) cout << " ";
		else if(i > idx && !done) {
			if(s[i] != s[idx] || i + 1 == s.length()) {
				cout << " ";
				done = true;
			}
		}
		cout << s[i];
	}

	cout << endl;
}

void _print(string s) {
	if(s[0] == s[1]) {
		cout << s[0] << " " << s[1] << " ";

		for(int i=2; i<s.length(); i++) {
			cout << s[i];
		}
	} else {
		for(int i=0; i<s.length()-2; i++) {
			cout << s[i];
		}

		int last = s.length() - 1;
		cout << " " << s[last - 1] << " " << s[last];
	}

	cout << endl;
}

int isInMiddle(string s) {
	char f = s[0];
	bool middleFlag = false, lastFlag = false;
	int idx = -1;

	for(int i=0; i<s.length(); i++) {
		if(s[i] != f && !middleFlag) {
			middleFlag = true;
			idx = i;
		} else if(s[i] == f && middleFlag) {
			lastFlag = true;
		}
	}

	if(middleFlag && lastFlag) return idx;

	return -1;
}



int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;

		int section = isInMiddle(s);
		if(isOne(s)) {
			print(s, 1);
		} else if(section != -1) {
			print(s, section);
		} else {
			_print(s);
		}
	}
	return 0;
}
