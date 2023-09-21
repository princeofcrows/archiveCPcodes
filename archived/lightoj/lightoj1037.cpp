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

int health[16], x[16][16], dp[1<<16],n;

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

int bitmask(int count, int mask){
	if(count==n) return 0;
	if(dp[mask]!=-1) return dp[mask];
	int maxi = 1 << 28;
	int c;
	for(int i=0; i<n; i++){
		if(check(mask, i)==0){
			for(int j=0; j<=n; j++){
				if(check(mask, j)!=0&&x[j][i]!=0){
					c = (int) ceil((float)health[i]/(float)x[j][i]);
					maxi = min(maxi, c+bitmask(count+1, Set(mask, i)));
				}
			}
		}
	}
	return dp[mask]=maxi;
}

int main(){
	//freopen("in.txt", "r", stdin);
	int a, b, w, j, m, i,t;
	cin >> t;
	for (j = 1; j<=t; j++){
		cin >> n;
		char c;
		for(int i=0; i<n; i++){
			cin >> health[i];
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> c;
				x[i][j] = (int)(c-'0');
			}
		}
		for (int i = 0; i < n; i++) {
			x[n][i] = 1;
		}
		memset(dp, -1, sizeof dp);
		cout << "Case "<<j<<": "<<bitmask(0, Set(0, n))<<endl;
	}
	return 0;
}
