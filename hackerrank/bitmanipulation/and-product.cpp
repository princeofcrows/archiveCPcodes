#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	unsigned long long int n, ans, temp, diglen, i, a, b;
    int t, j;
    cin >> t;
    for(j=1; j<=t; j++){
	    cin >> b >> a;
	    ans = b;
	    temp = 1;
	    for(i = b+1; i<=a; i=b+temp){
	    	ans&=i;
	    	temp*=2;
		}
		ans&=a;
		cout << ans <<endl;
	}
    return 0;
}
