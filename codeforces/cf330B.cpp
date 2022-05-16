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
	cin >> n >> m;
	bool sup[n+5];
	memset(sup, false, sizeof sup);
	for(int i=1; i<=m; i++){
		cin >> x >> y;
		sup[x] = true;
		sup[y] = true;
	}
	cout << n-1 << endl;
	a = 1;
	while(sup[a]){
		a++;
	}
	for(int i=1; i<=n; i++){
		if(i==a) continue;
		cout << i << " " << a << endl;
	}
	return 0;
}
