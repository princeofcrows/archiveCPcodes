#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <utility>
using namespace std;

vector < vector < pair <int, int > > > x(30005);
long long int maxd;
bool visit[30005];
int revpro;

void dfs( int n, long long int d){
	int node, weight;
	if(maxd<d){
		maxd = d;
		revpro = n;
	}
	for(int i = 0; i<x[n].size(); i++){
		node = x[n][i].second;
		weight = x[n][i].first;
		if(!visit[node]){
			visit[node] = 1;
			dfs(node, d+weight);
		}
	}
}


int main(){
	pair <int, int> temp;
	pair <int, int> temp2;
	int a, b, w, j, n, m, i,t, my;
	long long int d;
	cin >> t;
	for (j = 1; j<=t; j++){
		for(i = 0; i <= n; i++) x[i].clear();
		cin >> n;
		for (i = 1; i<=n-1; i++){
			cin >> a >> b >> w;
			temp.first = w;
			temp.second = b;
			temp2.first = w;
			temp2.second = a;
			x[a].push_back(temp);
			x[b].push_back(temp2);
		}
		
		memset(visit, 0, sizeof visit);
		maxd = 0;
		visit[0] = 1;
		dfs(0, 0);
		
		memset(visit, 0, sizeof visit);
		visit[revpro] = 1;
		dfs(revpro, 0);
		cout << "Case "<<j<<": "<<maxd<<endl;
	}
	return 0;
}
