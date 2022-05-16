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
	long long int k1, k2, k3, k5, k6, ans, n1, n2;
	cin >> k2 >> k3 >> k5 >> k6;
	n1 = min(k2, min(k5, k6));
	k2-=n1; k5-=n1; k6-=n1;
	n2 = min(k2, k3);
	ans = 256*n1+32*n2;
	cout << ans << endl;
	return 0;
}
