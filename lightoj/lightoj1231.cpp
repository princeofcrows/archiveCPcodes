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
long long int dp[55][1005], n, m, coin[55], ca[55];

long long int call(long long int i, long long int amount){
	if(amount==0) return 1;
    if(i>=n) return 0;
    if(dp[i][amount]!=-1) return dp[i][amount];
    long long int ret1;
    ret1 = 0;
    for(int j=0; j<=ca[i]&&amount-j*coin[i]>=0; j++){
	    ret1 += call(i+1, amount-j*coin[i]);
	}
	return dp[i][amount] = ret1%100000007;
}

int main(){
//	freopen("in.txt", "r", stdin);
	int t, j=1;
	cin >> t;
	while(t--){
		memset(dp, -1, sizeof dp);
		long long int k, ans;
		cin >> n >> k;
	    for(int i=0; i<n; i++){
	    	cin >> coin[i];
		}
		for(int i=0; i<n; i++){
	    	cin >> ca[i];
		}
		ans = call(0, k);
		cout << "Case "<<j<<": "<< ans << endl;
		j++;
	}
    return 0;
}
