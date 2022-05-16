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
    	cin >> n;
    	ans = 1;
    	for(i=0; i<n-1; i++){
    		cin >> j;
    		ans*=j;
    		ans%=1234567;
		}
		cout << ans <<endl;
	}
    return 0;
}

