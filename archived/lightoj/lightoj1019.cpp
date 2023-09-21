#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#define imax 999999999
using namespace std;

int graph[102][102];

void setup(){
	int i = 0, j = 0;
	for(i = 0; i<101; i++){
		for(j = 0; j<101; j++){
			graph[i][j] = imax;
		}
	}
}

int main(){
	int a, b, w, j, n, m, i,t, k, to, mo;
	cin >> t;
	for (to = 1; to<=t; to++){
		setup();
		cin >> n >> m;
		for (mo = 1; mo<=m; mo++){
			cin >> a >> b >> w;
			if(graph[a][b]>w){
				graph[a][b] = w;
			}
			if(graph[b][a]>w){
				graph[b][a] = w;
			}
		}
		
		for(k=0; k<=n; k++){
			for(i = 0; i<=n; i++){
				for(j = 0; j<=n; j++){
					if(graph[i][j]>graph[i][k]+graph[k][j]){
						graph[i][j] = graph[i][k]+graph[k][j];
					}
				}
			}
		}
		
		if(graph[1][n] >= imax){
			cout << "Case "<<to<<": Impossible" <<endl;
		}
		else{
			cout << "Case "<<to<<": "<<graph[1][n] << endl;
		}
	}
	return 0;
}
