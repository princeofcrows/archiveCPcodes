#include <bits/stdc++.h>
using namespace std;

vector < vector < pair <int, int > > > x(105);

void dijsktra(int my, int n, int t){
	pair <int, int> temp;
	priority_queue <pair<int, int>, vector < pair <int, int> >, greater< pair < int, int > > > q;
	vector <int> dis(n+5, 0);
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
		//if(distance!=dis[index]) continue;
		for(i = 0; i<x[index].size();i++){
			temp = x[index][i];
			d = temp.first;
			j = temp.second;
			tdis = (d+distance);
			if(tdis > dis[j]){
				dis[j] = tdis;
				temp.first = dis[j];
				q.push(temp);
			}
		}
	}
	int mx = dis[1], nd = 1;
	for (int i = 2; i <= n; i++) {
		if(mx<dis[i]){
			mx = dis[i];
			nd = i;
		}
	}
	cout <<"Case "<<t<<": The longest path from "<<my<<" has length "<<mx<<", finishing at "<<nd<<"."<<endl<<endl;
}


int main(){
	//freopen("in.txt", "r", stdin);
	pair <int, int> temp;
	pair <int, int> temp2;
	int a, b, w, j, n, m, i,t, my;
	j = 1;
	while(true){
		cin >> n;
		if(n==0)break;
		for (int l = 0; l<=n; l++){
			x[l].clear();
		}
		cin >> my;
		while(true){
			cin >> a >> b ;
			if(a==0||b==0) break;
			temp.first = 1;
			temp.second = b;
			x[a].push_back(temp);
			//cout << a <<" " << b<<endl;
		}
		//cout<<my<<endl;
		//cout << "Case "<<j<<":"<<endl;
		dijsktra(my, n, j);
		j++;
	}
	return 0;
}
