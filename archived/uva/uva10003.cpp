#include <bits/stdc++.h>
#define lli long long int
using namespace std;

vector <int> x;
int dp[55][55];

int rodcut(int a, int b){
	if(b-a==1) return 0;
	if(dp[a][b]!=-1) return dp[a][b];
	int ans = 999999999;
	for(int i=a+1;i<b; i++){
		ans = min(ans, x[b]-x[a]+rodcut(a, i)+rodcut(i, b));
	}
	return dp[a][b] = ans;
}

int main(){
	//freopen("in.txt", "r", stdin);
	int a, b, w, j, m, t, my, s;
	int n;
	j = 1;
	while(true){
		cin >> s;
		if(s==0)break;
		cin >> n;
		x.clear();
		x.push_back(0);
		for(j = 1; j<=n; j++){
			cin >> t;
			x.push_back(t);
		}
		x.push_back(s);
		memset(dp, -1, sizeof dp);
		printf("The minimum cutting is %d.\n",rodcut(0,n+1));
	}
	return 0;
}
