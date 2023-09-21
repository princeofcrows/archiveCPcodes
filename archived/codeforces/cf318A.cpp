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
	cin >> n >> k;
	ans = 0;
	if(!n%2){
		if(k<=n/2){
			ans = 2*k-1;
		}
		else{
			ans = 2*(k-n/2);
		}
	}
	else{
		if(k<=(n+1)/2){
			ans = 2*k-1;
		}
		else{
			ans = 2*(k-(n+1)/2);
		}
	}
	cout << ans << endl;
	return 0;
}
