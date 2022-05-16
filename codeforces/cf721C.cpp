#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

vector < vector < pair < int, int > > > x(5005);

void dijsktra(int n){
	pair <int, int> temp;
	priority_queue <pair<int, int>, vector < pair <int, int> >, greater< pair < int, int > > > q;
	vector <int> dis(n+1, INT_MAX);
	vector < vector <int> > road(5005);
	temp.first = 0;
	temp.second = 1;
	pair <int, int> top;
	q.push(temp);
	int distance, index, i, d, j, tdis, ans;
	road[1].push_back(1);
	while(!q.empty()){
		top = q.top();
		q.pop();
		index = top.second;
		distance = top.first;
		for(i = 0; i<x[index].size();i++){
			temp = x[index][i];
			d = temp.first;
			j = temp.second;
			tdis = d+distance;
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
	cout << road[n].size() <<endl;
	for(i=0; i<road[n].size(); i++){
		cout << road[n][i];
		if(i==road[n].size()-1) cout << endl;
		else cout<<" ";
	}
}

int main(){
	long long int n, t, i, j, k, l, m;
	cin >> n >> m >> t;
	pair <int, int> temp;
	for(i=0; i<m; i++){
		cin >> l >> j >> k;
		temp.first = k;
		temp.second = j;
		x[l].push_back(temp);
	}
	dijsktra(n);
	return 0;
}
