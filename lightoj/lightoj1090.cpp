#include <cstdio>
#include <cctype>
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

int main(){
	int t, csn = 1, ans, r, n, p, q, c, d, i, a, b, e, n5, n2;
	
	cin >> t;
	while(t--){
		cin >> n >> r >> p >> q;
		a = b = d =0;
		c = 5;
		while(n/c!=0||r/c!=0||(n-r)/c!=0){
			a+=n/c;
			b+=r/c;
			d+=(n-r)/c;
			c*=5;
		}
		int temp = p;
		e = 0;
		while(temp%5==0){
			temp/=5;
			e++;
		}
		n5 = a-b-d+e*q;
		a = b = d =0;
		c = 2;
		while(n/c!=0||r/c!=0||(n-r)/c!=0){
			a+=n/c;
			b+=r/c;
			d+=(n-r)/c;
			c*=2;
		}
		temp = p;
		e = 0;
		while(temp%2==0){
			temp/=2;
			e++;
		}
		n2 = a-b-d+e*q;
		cout << "Case " << csn++ <<": "<<min(n2, n5)<<endl;
	}
	return 0;
}
