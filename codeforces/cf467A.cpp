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
	long long int n, k, i, a, ans, c1, c2, c3, tmp, b;
	bool flag;
	char str[5], temp;
	cin >> n;
	ans = 0;
	for(i=0; i<n; i++){
		cin >> a >> b;
		if(b-a >= 2){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
