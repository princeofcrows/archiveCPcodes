#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <utility>

using namespace std;
int com1[1005], flag[1005], flg;

vector < vector <int> > x(1005);

void bfs(int n, int p){
	queue <int> q;
	int  index, i, j = 0, top, temp, ans = 0;
	top = p;
	q.push(top);
	com1[top] += 1;
	flag[top] = flg;
	while(!q.empty()){
		index = q.front();
		q.pop();
		for(i = 0; i<x[index].size();i++){
			temp = x[index][i];
			if(flag[temp] != flg){
				flag[temp] = flg;
				q.push(temp);
				com1[temp] += 1;	
			}
		}
	}
}


int main(){
	int a, b, w, j, n, m, i,t, my, meet, k;
	cin >> t;
	for (j = flg = 1; j<=t; j++){
		cin >> k >> n >> m;
		int p[100];
		for (i = 0; i<k; i++){
			cin >> p[i];
		}
		for (i = 1; i<=n; i++){
			x[i].clear();	
		}
		
		for (i = 1; i<=m; i++){
			cin >> a >> b;
			x[a].push_back(b);	
		}
		
		memset(com1, 0, sizeof com1);
		
		for (i = 0; i<k; i++){
			bfs(n, p[i]);
			flg++;
		}
		
		int ans = 0;
		for(int l=1; l<=n; l++){
			if(com1[l] == k) ans++;
		}
		cout << "Case "<<j<<": "<< ans << endl;
	}
	return 0;
}
