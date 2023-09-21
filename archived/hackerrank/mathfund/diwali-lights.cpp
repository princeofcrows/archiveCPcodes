#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	//freopen("in.txt", "r", stdin);
    int n, ans, mod, t;
    cin >> t;
    while(t--){
    	cin >> n;
    	mod = 100000;
	    ans = 1;
	    for(int i = 1; i<=n; i++){
	    	ans*=2;
	    	ans%=mod;
		}
		cout << ans-1<<endl;
	}
    return 0;
}
