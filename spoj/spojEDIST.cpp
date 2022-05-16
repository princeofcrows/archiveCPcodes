#include <bits/stdc++.h>

using namespace std;

int n, ara[105], dp[2005][2005];
string str1, str2;

int main(){
	//freopen("in.txt", "r", stdin);
	int t, j, i, num, ans, g, G;
	cin >> t;
	while(t--){
		cin >> str1;
		cin >> str2;
		for(int i=0;i<=str1.length(); i++){
			dp[0][i] = i;
		}
		for(int i=0;i<=str2.length(); i++){
			dp[i][0] = i;
		}
		for(int i=1;i<=str1.length(); i++){
			for(int j=1;j<=str2.length(); j++){
				if(str1[i-1]==str2[j-1]){
					dp[i][j] = dp[i-1][j-1];
				}
				else{
					dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]))+1;
				}
			}
		}
		
		cout << dp[str1.length()][str2.length()] << endl;
	}
	return 0;
}
