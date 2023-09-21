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
	//freopen("in.txt", "r", stdin);
	long long int n, ans;
	cin >> n;
	char og[n+1], pr[n+1];
	cin >> og;
	cin >> pr;
	ans = 0;
	for(int i=0; i<n; i++){
		ans +=min(abs(og[i]-pr[i]), abs(abs(og[i]-pr[i])-10));
	}
	cout << ans;
	return 0;
}
