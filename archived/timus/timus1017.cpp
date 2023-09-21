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
#define lli long long int
using namespace std;
lli dp[501][501];

lli sc(lli i, lli j){
	if(j==0) return 1;
	if(i>=j) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	lli ret = 0;
	for(int l=i+1; l<=j; l++){
		ret+=sc(l, j-l);
	}
	return dp[i][j]=ret;
}

int main(){
    lli n, q;
    cin >> n;
    memset(dp, -1, sizeof dp);
    cout << sc(0, n)-1;
    return 0;
}

