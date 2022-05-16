#include <bits/stdc++.h>
#define lli long long int
using namespace std;

vector < vector <int> > x(105);
lli maX, task;
bool vis[101];

void dfs(lli node){
	for(lli i=0; i<x[node].size(); i++){
		if(!vis[x[node][i]]){
			vis[x[node][i]] = true;
			maX++;
			dfs(x[node][i]);
		}
	}
}

int main(){
	//freopen("in.txt", "r", stdin);
	lli a, b, w, j, n, m, t, my;
	j = 1;
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
		lli temp = 0;
		task = 0;
		for(lli i=1; i<=n; i++){
			memset(vis, false, sizeof vis);
			maX = 0;
			dfs(i);
			if(temp<maX){
				temp = maX;
				task = i;
			}
		}
		cout << task << endl;
	}
	return 0;
}
