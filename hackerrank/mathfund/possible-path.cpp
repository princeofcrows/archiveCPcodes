#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b){
	if(a%b==0) return b;
	return gcd(b, a%b);
}

int main() {
    ll n, t, a, b, x, y;
    cin >> t;
    while(t--){
    	cin >> a >> b >> x >> y;
    	if(gcd(a,b)==gcd(x,y)) cout << "YES" <<endl;
    	else cout << "NO" <<endl;
	}
    return 0;
}

