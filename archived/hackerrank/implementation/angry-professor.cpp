#include <bits/stdc++.h>

using namespace std;

int main(){
	//freopen("in.txt", "r", stdin);
	int t, j, n, i, num, ans, g, k, G;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ans = 0;
		for(i=0; i<n; i++){
			cin >> g;
			if(g<0) ans++;
		}
		if(ans<=k) cout << "NO";
		else cout << "YES";
		cout<<endl;
	}
	return 0;
}
