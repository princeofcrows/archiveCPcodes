#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int ans, t,n, mx;
	//freopen("in.txt", "r", stdin);
    cin>>t;
    while(t--){
    	cin>>n;
    	int ara[n+5], num[n+5];
    	for(int i=0; i<n; i++){
	    	cin >>ara[i];
		}
		ans = mx = 0;
		for(int i=n-1; i>=0; i--){
	    	if(ara[i]>ans) ans = ara[i];
	    	mx += ans - ara[i];
		}
		cout << mx <<endl;
	}
    return 0;
}

