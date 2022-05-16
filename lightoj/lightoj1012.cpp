#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
using namespace std;

int  w, h;

int bfs(char map[22][22], int ir, int ic){
	int mr, mc, res=1, k;
	int dc[] = {0,1,-1,0};
	int dr[] = {1,0,0,-1};
	pair <int, int> temp;
	queue <pair <int,int> > q;
	temp.first = ir;
	temp.second = ic;
	q.push(temp);
	map[ir][ic] = '#';
	while(!q.empty()){
		temp = q.front();
		q.pop();
		ir = temp.first;
		ic = temp.second;
		for(k=0;k<4;k++){
			mr = ir + dr[k];
			mc = ic + dc[k];
			if((mc<w&&mc>=0) && (mr<h&&mr>=0) &&map[mr][mc]=='.'){
				res++;
				map[mr][mc] = '#';
				temp.first = mr;
				temp.second = mc;
				q.push(temp);
			}
		}
	}
	return res;
}

int main(){
	int t, j, i, k, f;
	
	cin >> t;
	for (k = 1; k<=t; k++){
		cin >> w >> h;
		char map[22][22];
		for(i=0; i<h; i++){
			cin >> map[i];
		}
		f = 0;
		for(i=0; i<h; i++){
			for(j=0; j<w; j++){
				if(map[i][j]=='@'){
					f = 1;
					break;
				}
			}
			if(f) break;
		}
		
		cout << "Case "<<k<<": " << bfs(map, i, j)<<endl;
	}
	return 0;
}
