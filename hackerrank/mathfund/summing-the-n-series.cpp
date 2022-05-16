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
    unsigned long long int t, ans, i, j, n;
    cin >> t;
    //seive();
    while(t--){
    	cin >> j;
    	ans = (j%1000000007)*(j%1000000007);
    	ans%=1000000007;
		cout << ans <<endl;
	}
    return 0;
}

