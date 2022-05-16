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
long long int dp[23][10005], n, m, coin[23];

long long int call(long long int i, long long int amount){
    if(i>=21) {
    	if(amount==0) return 1;
    	else return 0;
	}
    if(dp[i][amount]!=-1) return dp[i][amount];
    long long int ret1, ret2;
    ret1 = ret2 = 0;
    if(amount-coin[i]>=0) ret1 = call(i, amount-coin[i]);
    ret2 = call(i+1, amount);
    return dp[i][amount] = ret1+ret2;
}

int main(){
    for(int i=0; i<21; i++){
    	coin[i] = (i+1)*(i+1)*(i+1);
	}
	while(scanf("%d", &n)!=EOF){
		memset(dp, -1, sizeof dp);
		long long ans = 0;
	    ans = call(0, n);
	    cout << ans << endl;
	}
    return 0;
}
