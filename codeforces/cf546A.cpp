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
	long long int k, w, n, ans;
	bool flag;
	char str[5], temp;
	cin >> k >> n >> w;
	ans = k*(w+1)*w/2-n;
	if(ans<0) ans = 0;
	cout << ans << endl;
	return 0;
}
