#include <bits/stdc++.h>
using namespace std;

int ara[105], ara2[105], n, m;
int dp[105][105];
vector <int> x;

int lcs(int i, int j){
	int ans = 0;
	if(i==n||j==m) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	if(ara[i]==ara2[j]){
		ans = 1+lcs(i+1, j+1);
	}
	else{
		ans = max(lcs(i+1,j), lcs(i, j+1));
	}
	return dp[i][j] = ans;
}

void printlcs(int i, int j){
	if(i==n||j==m){
		for(int l=0; l<x.size(); l++){
			cout << x[l] << " ";
		}
		return;
	}
	if(ara[i]==ara2[j]){
		x.push_back(ara[i]);
		printlcs(i+1, j+1);
	}
	else{
		if(dp[i+1][j]>=dp[i][j+1]) printlcs(i+1,j);
		else printlcs(i, j+1);
	}
}

int main() {
	int ans;
    cin>>n>>m;
    for(int i=0; i<n; i++){
    	cin >>ara[i];
	}
	for(int i=0; i<m; i++){
    	cin >>ara2[i];
	}
	memset(dp, -1, sizeof dp);
	ans = lcs(0, 0);
	printlcs(0, 0);
    return 0;
}

