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
	int home[35], away[35];
	cin >> n;
	tmp = 0;
	for(i=0; i<n; i++){
		cin >> home[i] >> away[i];
	}
	
	ans = 0;
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(home[i] == away[j]){
				ans++;
			}
		}
	}
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(away[i] == home[j]){
				ans++;
			}
		}
	}
	
	cout << ans << endl;
	return 0;
}
