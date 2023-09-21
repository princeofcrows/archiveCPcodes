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
	long long int n, x, y, z, a, b, c;
	bool flag;
	char str[105], temp, str2[105];
	cin >> n;
	x = y = z = 0;
	for(int i=0; i<n; i++){
		cin >> a >> b >> c;
		x += a;
		y += b;
		z += c;
	}
	if(!x&&!y&&!z) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
