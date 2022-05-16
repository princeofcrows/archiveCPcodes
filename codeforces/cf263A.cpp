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
	long long int n, k, i, a, ans, j;
	bool flag;
	char str[5], temp;
	ans = 0;
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++){
			cin >> a;
			if(a == 1) ans = abs(3-j) + abs (3-i);
		}
	}
	cout << ans << endl;
	return 0;
}
