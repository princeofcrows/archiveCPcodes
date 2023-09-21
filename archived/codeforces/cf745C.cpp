#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <string>
using namespace std;

char str[501][501];
int n, m, k;

int main(){
	freopen("in.txt", "r", stdin);
	int i, j, ans, temp1, temp2;
	ans = 0;
	cin >> n >> m >> k;
	vector < vector <int> > x(n+5);
	int ks[k+5];
	bool flag[n+5];
	memset(flag, false, sizeof flag);
	for(i=0; i<k; i++){
		cin >> ks[i];
		flag[ks[i]] = true;
	}
	for(i=0; i<m; i++){
		cin>>temp1>>temp2;
		x[temp1].push_back(temp2);
		x[temp2].push_back(temp1);
	}
	ans = 0;
	queue <int> q;
	for(i=0; i<k; i++){
		q.push(ks[i]);
		while(!q.empty()){
			int u = q.front();
			q.pop();
			for(j=0; j<x[u].size(); j++){
				if(flag[x[u][j]]==false){
					flag[x[u][j]] = true;
					q.push(x[u][j]);
				}
			}
		}
	}
	for(i=1; i<=n; i++){
		bool flag2[n+5];
		memset(flag2, true, sizeof flag);
		flag2[i] = false;
		for(int l=1; l<=n; l++){
			if(flag[l]){
				flag2[l] = false;
			}
		}
		for(j=0; j<x[i].size(); j++){
			flag2[x[i][j]] = false;
		}
		for(j=1; j<=n; j++){
			if(flag2[j]==true){
				ans++;
				flag2[j] = false;
				x[i].push_back(j);
				x[j].push_back(i);	
			}
		}
	}
	cout << ans;
	return 0;
}
