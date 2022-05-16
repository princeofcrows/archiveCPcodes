#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
using namespace std;

vector < vector < pair <int, int > > > x(1005);

void dijsktra(int my, int n){
	pair <int, int> temp;
	priority_queue <pair<int, int>, vector < pair <int, int> >, greater< pair < int, int > > > q;
	vector <int> dis(n+5, INT_MAX);
	temp.first = 0;
	dis[my] = 0;
	temp.second = my;
	pair <int, int> top;
	q.push(temp);
	int distance, index, i, d, j, tdis;
	while(!q.empty()){
		top = q.top();
		q.pop();
		index = top.second;
		distance = top.first;
		if(distance!=dis[index]) continue;
		for(i = 0; i<x[index].size();i++){
			temp = x[index][i];
			d = temp.first;
			j = temp.second;
			tdis = (d+distance);
			if(tdis < dis[j]){
				dis[j] = tdis;
				temp.first = dis[j];
				q.push(temp);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if(i==my) continue;
		if(dis[i] == INT_MAX) {
			cout << -1 <<" ";
		}
		else {
			cout << dis[i] << " ";
		}
	}
	cout <<endl;
}


int main(){
	pair <int, int> temp;
	pair <int, int> temp2;
	int a, b, w, j, n, m, i,t, my;
	cin >> t;
	for (j = 1; j<=t; j++){
		cin >> n >> m;
		for (int l = 0; l<=n; l++){
			x[l].clear();
		}
		for (i = 1; i<=m; i++){
			cin >> a >> b ;
			temp.first = 6;
			temp.second = b;
			temp2.first = 6;
			temp2.second = a;
			x[a].push_back(temp);
			x[b].push_back(temp2);
		}
		cin >> my;
		//cout << "Case "<<j<<":"<<endl;
		dijsktra(my, n);
	}
	return 0;
}
