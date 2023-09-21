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
	long long int n, t, i, j, k, l, ans, ans1, ans2;
	cin >> n >> k;
	string pass[105], rp;
	bool flag = false;
	int ara[105];
	memset(ara, 0, sizeof ara);
	for(i=0; i<n; i++){
		cin >> pass[i];
		ara[pass[i].length()]++;
	}
	cin >> rp;
	ans = rp.length();
	ans1 = ans2 = 0;
	for(i=1; i<=ans; i++){
		if(i!=ans){
			ans1 += ara[i];
			ans2 += ara[i];
		}
		else{
			ans2 += ara[i];
		}
	}
	ans1 = ans1 + ans1/k*5 + 1;
	if(ans2%k==0)	ans2 = ans2 + (ans2-1)/k*5;
	else ans2 = ans2 + ans2/k*5;
	cout << ans1 << " " << ans2 << endl;
	return 0;
}
