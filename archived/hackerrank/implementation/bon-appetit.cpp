#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
using namespace std;

int a[100005];

int main() {
	//freopen("in.txt", "r", stdin);
	lli t, n, m, mx, lm, gd, mp, c, fac, temp, k;
	cin >> n >> k;
	fac = 0;
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(i!=k) fac+=a[i];
	}
	cin >> temp;
	if(temp==fac/2) cout << "Bon Appetit";
	else cout << temp - fac/2;
    return 0;
}

