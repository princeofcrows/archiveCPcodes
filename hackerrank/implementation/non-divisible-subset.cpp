#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int ans, tem, ara[105], k;
    int n;
    cin >> n >> k;
    memset(ara, 0, sizeof ara);
    ans = 0;
    for(int i=0; i<n; i++){
    	cin >> tem;
    	ara[tem%k]++;
	}
	ans = 0;
	if(ara[0]>1)ara[0]=1;
	if(k%2==0&&ara[k/2]>1){
		ara[k/2]=1;
	}
	for(int i=0; i<k; i++){
    	ans+=max(ara[i], ara[k-i]);
    	ara[i] = 0;
    	ara[k-i] = 0;
	}
	
    cout<<ans;
    return 0;
}

