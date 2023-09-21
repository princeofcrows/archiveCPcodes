#include <bits/stdc++.h>
#define lli long long int
using namespace std;

vector < vector <lli> > x(1005);
lli dp[1005][5], par[1005];
bool vis[1005];
lli minvert(lli u, lli isGurd){
	vis[u] = true;
	if(x[u].size()==0) return 0;
	if(dp[u][isGurd]!=-1) return dp[u][isGurd];
	lli sum = 0;
	for(lli i = 0; i<x[u].size(); i++){
		lli v = x[u][i];
		if(v!=par[u]){
			par[v] = u;
			if(isGurd==0){
				sum+=minvert(v, 1);
			}
			else if(isGurd==1){
				sum+=min(minvert(v, 1), minvert(v, 0));
			}
		}
	}
	return dp[u][isGurd] = sum+isGurd;
}

int main(){
	//freopen("in.txt", "r", stdin);
	lli a, b, w, n, m, t, my, ans1, ans2, node;
	while(true){
		cin >> n;
		if(n==0)break;
		for (int l = 0; l<=n; l++){
			x[l].clear();
		}
		for(lli j = 1; j<=n; j++){
			cin >> t;
			for(int i=0;i<t; i++){
				cin >> a ;
				x[j].push_back(a);
			}
		}
		memset(dp, -1, sizeof dp);
		memset(par, -1, sizeof par);
		memset(vis, false, sizeof vis);
		ans1 = 0;
		/*for(lli i= 1; i<=n; i++){
			if(!vis[i]) ans1+=min(minvert(i, 0), minvert(i, 1));
		}*/
		ans1=min(minvert(1, 0), minvert(1, 1));
		if(n==1)cout <<1<< endl;
		else cout <<ans1<< endl;
		
	}
	return 0;
}
