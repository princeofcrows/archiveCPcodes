#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>

using namespace std;

vector < vector < pair < int, int > > > x(5005);

void dijsktra(int n){
	pair <int, int> temp;
	priority_queue <pair<int, int>, vector < pair <int, int> >, greater< pair < int, int > > > q;
	vector <int> dis(n+1, INT_MAX);
	vector <int> dis2;
	vector < vector <int> > road(5005);
	vector <int> mindis(n+1, INT_MAX);
	temp.first = 0;
	temp.second = 1;
	pair <int, int> top;
	q.push(temp);
	int distance, index, i, d, j, tdis, ans;

	for(i=1; i<=n; i++){
		for(j=0; j<x[i].size(); j++ ){
			mindis[i] = min(x[i][j].first*2, mindis[i]);
		}
	}
	road[1].push_back(1);
	while(!q.empty()){
		top = q.top();
		q.pop();
		index = top.second;
		distance = top.first;
		if(top.second==n){
			dis2.push_back(top.first);
		}
		if(distance <= dis[index]){
			dis[index] = distance;
			for(i = 0; i<x[index].size();i++){
				temp = x[index][i];
				d = temp.first;
				j = temp.second;
				tdis = d+distance;
				if(j==n){
					dis2.push_back(tdis);
				}
				if(tdis < dis[j]){
					dis[j] = tdis;
					temp.first = dis[j];
					q.push(temp);
					road[j].clear();
					for(int k = 0; k<road[index].size(); k++){
						road[j].push_back(road[index][k]);
					}
					road[j].push_back(j);
				}
			}
		}
	}
	std::sort (dis2.begin(), dis2.end());
	i = 0;
	while(dis[n] == dis2[i]){
		i++;
	}

	int mind = INT_MAX;
	for(int k = 0; k<road[n].size(); k++){
		if(mindis[road[n][k]]<=mind){
			mind = mindis[road[n][k]];
		}
	}
	cout << min((dis[n]+mind), dis2[i]) << endl;
}


int main(){
    freopen("in.txt", "r", stdin);
	pair <int, int> temp;
	pair <int, int> temp2;
	int a, b, w, j, n, m, i,t;
	cin >> t;
	n = 0;
	for (j = 1; j<=t; j++){
		for (i = 0; i<=n; i++) x[i].clear();
		cin >> n >> m;
		for (i = 1; i<=m; i++){
			cin >> a >> b >> w;
			temp.first = w;
			temp.second = b;
			temp2.first = w;
			temp2.second = a;
			x[a].push_back(temp);
			x[b].push_back(temp2);
		}
		cout << "Case "<<j<<": ";
		dijsktra(n);
	}
	return 0;
}
