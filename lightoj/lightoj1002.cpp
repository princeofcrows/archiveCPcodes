#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
using namespace std;

void dijsktra(vector < vector < pair <int, int > > > x, int my, int n){
	pair <int, int> temp;
	priority_queue <pair<int, int>, vector < pair <int, int> >, greater< pair < int, int > > > q;
	vector <int> dis(n, INT_MAX);
	temp.first = 0;
	temp.second = my;
	pair <int, int> top;
	q.push(temp);
	int distance, index, i, d, j, tdis;
	while(!q.empty()){
		top = q.top();
		q.pop();
		index = top.second;
		distance = top.first;
		
		if(distance <= dis[index]){
			dis[index] = distance;
			for(i = 0; i<x[index].size();i++){
				temp = x[index][i];
				d = temp.first;
				j = temp.second;
				tdis = max(d, distance);
				if(tdis < dis[j]){
					dis[j] = tdis;
					temp.first = dis[j];
					q.push(temp);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if(dis[i] == INT_MAX) {
			cout << "Impossible\n";
		}
		else {
			cout << dis[i] << endl;
		}
	}
}


int main(){
	pair <int, int> temp;
	pair <int, int> temp2;
	int a, b, w, j, n, m, i,t, my;
	cin >> t;
	for (j = 1; j<=t; j++){
		cin >> n >> m;
		vector < vector < pair <int, int > > > x(n);
		for (i = 1; i<=m; i++){
			cin >> a >> b >> w;
			temp.first = w;
			temp.second = b;
			temp2.first = w;
			temp2.second = a;
			int k, kk;
			for(k = 0; k<x[a].size();k++){
				if (x[a][k].second == b){
					break;
				}
			}
			for(kk = 0; kk<x[b].size();kk++){
				if (x[b][kk].second == a){
					break;
				}
			}
			
			if (k == x[a].size()){
				x[a].push_back(temp);
				x[b].push_back(temp2);
			}
			else if(x[a][k].first>temp.first){
				x[a][k] = temp;
				x[b][kk] = temp2;
			}	
		}
		cin >> my;
		cout << "Case "<<j<<":"<<endl;
		dijsktra(x, my, n);
	}
	return 0;
}
