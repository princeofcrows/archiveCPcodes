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
	long long int k, w, n, ans, l, i, t, j, a, b, c;
	bool flag;
	ans = 0;
	cin >> n;
	if(n%2==0){
		l = n/2;
		ans = l*(l+1) - l*l;
	}
	else{
		l = n/2 + 1;
		ans = l*(l-1) - l*l;
	}
	cout << ans << endl;
	return 0;
}
