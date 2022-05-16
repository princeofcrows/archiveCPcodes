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
	int t, csn = 1, ans, n, i, a, b;
	
	cin >> t;
	while(t--){
		ans = 0;
		cin >> n;
		for(i = 0; i<n; i++){
			cin >> a >> b;
			ans ^= b - a - 1;
		}
		
		if (!ans) cout << "Case " << csn++ <<": Bob\n";
		else cout << "Case " << csn++ <<": Alice\n";
		
	}
	return 0;
}
