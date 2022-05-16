#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define ll long long int

int main() {
    long long int t, ans, i, j, n, l, s1, s2, q, tm, b;
    cin >> t;
    while(t--){
    	cin >> l >> b;
    	if(l==b){
    		cout << 1 << endl;
    		continue;
		}
    	s1 = l*b;
    	n = 1;
    	ans = 1;
    	while((l>=n)&&(b>=n)){
    		if((l%n==0)&&(b%n==0)){
    			ans = s1/(n*n);
    			//cout << n << endl;
			}
			n++;
		}
		cout << ans <<endl; 
	}
    return 0;
}

