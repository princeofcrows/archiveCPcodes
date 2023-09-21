#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int ans, tem, ara[105];
    int n;
    cin >> n;
    memset(ara, 0, sizeof ara);
    ans = 0;
    for(int i=0; i<n; i++){
    	cin >> tem;
    	ara[tem]++;
    	if(ara[tem]==2){
    		ans++;
    		ara[tem] = 0;
		} 
	}
    cout<<ans;
    return 0;
}

