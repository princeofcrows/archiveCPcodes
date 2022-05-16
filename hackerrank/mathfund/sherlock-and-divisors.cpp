#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	//freopen("in.txt", "r", stdin);
    long long int n, t, ans, i;
    cin >> t;
    while(t--){
    	cin >> n;
    	ans = 0;
    	if(n%2)	cout << 0 << endl;
    	else{
    		for(i=1; i*i<=n; i++){
    			if(n%i==0){
    				if(i%2==0)	ans++;
    				if((n/i)%2==0&&i*i!=n) ans++;
				}
			}
			cout << ans <<endl;
		}
	}
    return 0;
}

