#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
int w[20][20];
int n;
int dp[16][(1<<16)];

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

int call(int male, int female){
	if(male==n) return 0;
	if(dp[male][female]!=-1) return dp[male][female];
	for(int i=0; i<n; i++){
		if(check(female,i)==0){
			dp[male][female] = max(dp[male][female], w[male][i]+dp[male][female])
		}
	}
	return dp[male][female]
}

int main(){
	int t, j, i, k, ans, cas;
	cin >> t;
	for (cas = 1; cas<=t; cas++){
		memset(dp, -1, sizeof dp);
		cin >> n;
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				cin >> w[i][j];
			}
		}
		cout << "done" << endl;
		ans= 0;
		ans = call(0);
		cout << "Case " << cas << ": " << ans << endl;
	}
	return 0;
}
