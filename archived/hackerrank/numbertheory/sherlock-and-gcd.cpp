#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b){
    if(a%b == 0) return b;
    else return gcd(b, a%b);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ll t, ans, i, j, n;
    cin >> t;
    //seive();
    while(t--){
    	cin >> n;
    	cin >> ans;
    	for(i=0; i<n-1; i++){
    		cin >> j;
    		ans = gcd(j, ans);
		}
		if(ans==1) cout << "YES" <<endl;
		else cout << "NO" <<endl;
	}
    return 0;
}

