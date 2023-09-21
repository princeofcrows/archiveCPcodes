#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int dp[105][105], n, ara[105], smoke[105][105];

int minsmk(int i, int j){
	if(j-i==0) return 0;
	if(j-i==1) return ara[i]*ara[j];
	if(smoke[i][j]!=-1) return smoke[i][j];
	int ret = 1<<30;
	for(int l=i; l<j; l++){
		ret = min(ret, dp[i][l]*dp[l+1][j]+minsmk(i, l)+minsmk(l+1, j));
	}
	return smoke[i][j]=ret;
}

int main(){
	//freopen("in.txt", "r", stdin);
	int t, num, ans, g, G;
	while(scanf("%d", &n)!=EOF){
		memset(dp, 0, sizeof dp);
		for(int i=0; i<n; ++i){
			cin >> ara[i];
			dp[i][i] = ara[i];
		}
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				dp[i][j] = (dp[i][j-1]+ara[j])%100;
			}
		}
		memset(smoke, -1, sizeof smoke);
		cout << minsmk(0, n-1)<<endl;
	}
	return 0;
}
