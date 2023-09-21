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

int main(){
	int t, csn = 1, ans, n, i;
	
	cin >> t;
	while(t--){
		cin >> n;
		vector <int> w(n);
		vector <int> b(n);
		for(i = 0; i<n; i++)	cin >> w[i];
		
		for(i = 0; i<n; i++)	cin >> b[i];
		
		ans = 0;
		for(i = 0; i<n; i++)	ans ^= b[i] - w[i] - 1;
		
		if (!ans) cout << "Case " << csn++ <<": black wins\n";
		else cout << "Case " << csn++ <<": white wins\n";
		
	}
	return 0;
}
