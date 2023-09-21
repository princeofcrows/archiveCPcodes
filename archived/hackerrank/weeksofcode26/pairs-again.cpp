#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, n1, np, ans;
    cin >> n;
    ans = n-2;
    bool prime[n+6];
    memset(prime, true, sizeof prime);
    for(int i=2;i<=n; i++){
    	if(prime[i]){
    		for(int j=i*2; j<=n; j+=i){
    			prime[j] = false;
			}
		}
	}
	np = 0;
    for(int i=2;i*i<=n; i++){
    	if(n%i==0){
    		if(prime)
    		n1 = i*2;
    		while(n1<n){
    			ans++;
    			n1+=i;
			}
			n1 = (n/i)*2;
			while(n1<n){
				ans++;
    			n1+=(n/i);
			}
		}
	}
	cout << ans;
    return 0;
}
