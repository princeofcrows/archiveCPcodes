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
    unsigned long long int t, ans, i, j, n, k;
    cin >> t;
    //seive();
    while(t--){
    	cin >> n >> k;
    	n--;
    	if(n%2){
    		if(k<=n/2) cout << (2*k+1);
    		else cout <<(n-k)*2;
		}
    	else{
    		if(k<n/2) cout << (2*k+1);
    		else cout <<(n-k)*2;
		}
    	cout << endl;
	}
    return 0;
}

