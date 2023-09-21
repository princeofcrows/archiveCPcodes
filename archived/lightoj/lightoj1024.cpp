#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <utility>

using namespace std;

long long int gcd(long int a, long int b){
	if(a%b==0) return b;
	return gcd(b, a%b);
}

int main(){
	long long int caseno, t = 1, a, b, n, ta, tb, ans;
	cin >> caseno;
	while(caseno--){
		cin >> n;
		cin >> a;
		ta = a;
		while(--n){
			cin >>b;
			tb = b;
			ta = ta*tb/gcd(ta, tb);
		}
		cout << "Case " << t <<": "<< ta <<"\n";
		t++;
	}
	return 0;
}
