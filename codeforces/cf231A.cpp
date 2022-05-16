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
	long long int n, k, i, a, temp, ans, m, b, c;
	cin >> n;
	ans = 0;
	for(i=0; i<n; i++){
		char *op = new char[3];
		cin >> op;
		if(op[1] == '+'){
			ans++;
		}
		else if(op[1] == '-'){
			ans--;
		}
	}
	cout << ans << endl;
	return 0;
}
