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
std::list<int> adjlst[20005];
int color[20005];
enum {
	NOT_VISITED,
	BLACK,
	RED,
};

int main(){
	int caseno, n, x, y,i, node, res,t = 1;
	cin >> caseno;
	while(caseno--){
		cin >> n;
		i = 0;
		while(i < 20005){
			adjlst[i].clear();
			i++;
		}
		while(n--){
			cin >> x >> y;
			adjlst[x].push_back(y);
			adjlst[y].push_back(x);
		}
		memset(color, 0, sizeof color);
		res = 0;
		for (i = 0; i<20005; i++){
			if(!adjlst[i].empty() && color[i] == NOT_VISITED){
				int black = 0, red = 0;
				queue<int> q;
				q.push(i);
				color[i] = BLACK;
				black++;
				while(!q.empty()){
					node = q.front();
					q.pop();
					for (list<int>::iterator cur = adjlst[node].begin(); cur != adjlst[node].end(); cur++){
						if(color[*cur] == NOT_VISITED){
							q.push(*cur);
							if(color[node] == BLACK){
								color[*cur] = RED;
								red++;
							}
							else{
								color[*cur] = BLACK;
								black++;
							}
						}
					}
				}
				res += max(red, black);
			}
		}
		cout << "Case " << t <<": "<< res <<"\n";
		t++;
	}
	return 0;
}
