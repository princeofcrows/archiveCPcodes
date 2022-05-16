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
	int t, csn = 1, ans, r, c, i, a, b, j;
	
	cin >> t;
	while(t--){
		ans = 0;
		cin >> n;
		ans = 0;
		for(j = 0; j<n; j++){
			cin>>a;
		}
		if (!ans) cout << "Case " << csn++ <<": Bob\n";
		else cout << "Case " << csn++ <<": Alice\n";
	}
	return 0;
}
