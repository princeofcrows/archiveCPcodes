//Blanca Padilla
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
	cin >> a >> b >> c;
	ans = a*b*c;
	if(a*(b+c)>ans)	ans = a*(b+c);
	if((a+b+c)>ans) ans = a+b+c;
	if((a+b)*c>ans) ans = (a+b)*c;
	if(a+b*c>ans) ans = a+b*c;
	if(a*b+c>ans) ans = a*b+c;
	cout << ans << endl;
	return 0;
}
