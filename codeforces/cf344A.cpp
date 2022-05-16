#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	long long int ans, h, i, j, n, p, a;
	cin >> n;
	ans = 0;
	a = 0;
	h = 0;
	for(j = 0; j<n; j++){
		cin >> a;
		if(h!=a){
			ans++;
			h = a;
		}
	}
	cout << ans << endl;
	return 0;
}
