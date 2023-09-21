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
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j, b;
	bool flag;
	
	cin >> n >> a;
	ans = 1;
	tmp = 0;
	flag = true;
	for(i = 1; i<=n; i++){
		cin >> k;
		if(k-tmp<=a&&i!=1){
			ans++;
		}
		else {
			ans = 1;
			
		}
		tmp = k;
	}
	cout << ans << endl;
	return 0;
}
