#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
using namespace std;

void dijsktra(vector < vector < pair <int, int > > > x, int my, int n, int meet){
	pair <int, int> temp;
	priority_queue <pair<int, int>, vector < pair <int, int> >, greater< pair < int, int > > > q;
	vector <int> dis1(n, INT_MAX);
	vector <int> dis2(n, INT_MAX);
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
		
		if(distance <= dis1[index]){
			dis1[index] = distance;
			for(i = 0; i<x[index].size();i++){
				temp = x[index][i];
				d = temp.first;
				j = temp.second;
				tdis = distance+d;
				if(tdis < dis1[j]){
					dis1[j] = tdis;
					temp.first = dis1[j];
					q.push(temp);
				}
			}
		}
	}
	
	temp.first = 0;
	temp.second = meet;
	q.push(temp);
	while(!q.empty()){
		top = q.top();
		q.pop();
		index = top.second;
		distance = top.first;
		
		if(distance <= dis2[index]){
			dis2[index] = distance;
			for(i = 0; i<x[index].size();i++){
				temp = x[index][i];
				d = temp.first;
				j = temp.second;
				tdis = distance+d;
				if(tdis < dis2[j]){
					dis2[j] = tdis;
					temp.first = dis2[j];
					q.push(temp);
				}
			}
		}
	}
	int ans = 0;
	for(i=0; i<n;i++){
		ans = max(ans, dis1[i]+dis2[i]);
	}
	cout << ans << endl;
}


int main(){
	pair <int, int> temp;
	pair <int, int> temp2;
	int a, b, w, j, n, m, i,t, my, meet;
	cin >> t;
	for (j = 1; j<=t; j++){
		cin >> n >> m;
		vector < vector < pair <int, int > > > x(n);
		for (i = 1; i<=m; i++){
			cin >> a >> b;
			temp.first = 1;
			temp.second = b;
			temp2.first = 1;
			temp2.second = a;
			x[a].push_back(temp);
			x[b].push_back(temp2);
		}
		cin >> my >> meet;
		cout << "Case "<<j<<": ";
		dijsktra(x, my, n, meet);
	}
	return 0;
}
