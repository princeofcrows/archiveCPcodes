#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
	unsigned long long int T, t, i, j, k, n, m, b, a, q, l;
	scanf("%d", &T);
	t = 1;
	while(T--){
		cin >> n >> m >> q;
		vector < vector <int> > x(n+6);
		for(i=0; i<m; i++){
			scanf("%d%d", &a, &b);
			x[a].push_back(b);
			x[b].push_back(a);
		}
		printf("Case %d:\n", t);
		for(i=0; i<q; i++){
			scanf("%d%d", &a, &b);
			if(a == b){
				printf("Yes\n");
				continue;	
			}
			bool flag = true;
			for(j=0; j<x[a].size(); j++){
				if(flag==false) break;
				for(l=0; l<x[b].size(); l++){
					if(x[a][j]==x[b][l]){
						printf("Yes\n");
						flag = false;
						break;
					}
				}
			}
			if(flag) printf("No\n");
		}
		t++;
	}
	return 0;
}
