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
	long long int n, t, i, j, k, l, m, ans, temp;
	cin >> n;
	bool dat[n+1];
	int ara[n+1];
	memset(dat, false, sizeof dat);
	ans = 0;
	for(i=0; i<n; i++){
		cin >> ara[i];
	}
	ans = 0;
	for(i=0; i<n; i++){
		m = ara[i];
		temp = 1;
		for(j=m; j!=-1; j=ara[j-1]){
			temp++;
		}
		if(temp>ans) ans= temp;
	}
	cout << ans << endl;
	return 0;
}
