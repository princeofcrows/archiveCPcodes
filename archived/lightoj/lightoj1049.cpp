#include <cstdio>
#include <cctype>
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

int Left[105];
int Right[105];

int main(){
	int t, csn = 1, res, a, b, c, n;
	
	int wr, wl;
	cin >> t;
	while(t--){
		memset(Left, 0, sizeof Left);
		memset(Right, 0, sizeof Right);
		cin >> n;
		wr = 0;
		wl = 0;
		while(n--){
			cin >> a >> b >> c;
			if(!(Left[a])&&!(Right[b])){
				Left[a] = 1;
				Right[b] = 1;
				wl+=c;
			}
			else{
				Left[b] = 1;
				Right[a] = 1;
				wr+=c;
			}
		}
		res = min(wl, wr);
		cout << "Case " << csn++ <<": "<< res <<"\n";
	}
	return 0;
}
