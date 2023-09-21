#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main(){
	long long int n, m, a, ans, x, y, k;
	cin >> n >> m >> k;
	vector <vector <pair< long long int, long long int > > > dat(n+5);
	pair <int, int> temp, temp2;
	for(int i=0; i<m; i++){
		cin >> x >> y >> a;
		temp.first = x;
		temp.second = a;
		temp2.first = y;
		temp2.second = a;
		dat[y].push_back(temp);
		dat[x].push_back(temp2);
	}
	bool sup[n+5];
	memset(sup, false, sizeof sup);
	for(int i=1; i<=k; i++){
		cin >> a;
		sup[a] = true;
	}
	ans = INT_MAX;
	for(int i=1; i<=n; i++){
		if(sup[i]){
			for(int j=0; j<dat[i].size(); j++){
				if(!sup[dat[i][j].first]){
					ans = min(ans, dat[i][j].second);
				}
			}
		}
	}
	if(ans == INT_MAX){
		cout << -1 << endl;
	}
	else{
		cout << ans << endl;
	}
	return 0;
}
