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
string q, s[30];

int main(){
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j, l, idx;
	bool flag, alp[26];
	memset(alp, false, sizeof alp);
	char ts;
	cin >> idx;
	ans = 0;
	while(idx){
		idx -= (idx & -idx);
		ans++;
	}
	cout << ans << endl;
	
	return 0;
}
