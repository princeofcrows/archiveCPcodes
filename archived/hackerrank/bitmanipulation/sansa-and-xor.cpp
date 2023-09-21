#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int n, ans, temp, t;
    cin >> t;
    while(t--){
    	ans = 0;
	    cin >> n;
	    for(int i=0; i<n; i++){
	    	cin >> temp;
	    	if(i%2==0){
	    		ans=(ans^temp);
			}
		}
		if(n%2)cout << ans;
		else cout << 0;
		cout << endl;
	}
    return 0;
}

