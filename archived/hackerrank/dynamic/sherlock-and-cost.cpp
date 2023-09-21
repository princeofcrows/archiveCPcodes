#include <bits/stdc++.h>
using namespace std;

long long int num[100005], dp[100005][2];

int main() {
	//freopen("in.txt", "r", stdin);
	long long int ans1, ans2, t,n, mx, c, tmp;
	cin >> tmp;
	while(tmp--){
		cin >> n;
	    for(int i = 0; i<n; i++){
	    	cin >> num[i];
		}
		memset(dp, 0, sizeof dp);
		for(int i = 1; i<n; i++){
	    	dp[i][0] = max(dp[i-1][0], dp[i-1][1]+abs(num[i-1]-1));
	    	dp[i][1] = max(dp[i-1][1]+abs(num[i]-num[i-1]), dp[i-1][0]+abs(num[i]-1));
		}
		cout << max(dp[n-1][0], dp[n-1][1])<<endl;
	}
    return 0;
}

