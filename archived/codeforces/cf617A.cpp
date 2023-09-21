#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;
int ara[100006];
int main(){
	long long int min, max, thrd, ans, n, i, j, temp;
	cin >> n;
	i = 5;
	ans = 0;
	while(n!=0){
		n -= i;
		if(n<0){
			n+=i;
			i--;
			continue;
		}
		ans++;
	}
	cout << ans << endl;
	return 0;
}
