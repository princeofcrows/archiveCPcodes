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
	long long int k, w, n, ans, l, i, t, j, a;
	bool flag;
	char str[55], temp;
	ans = 0;
	cin >> n;
	n++;
	ans = n;
	int res[4];
	while(1){
		i = 3;
		while(n!=0){
			res[i] = n%10;
			n/=10;
			i--;
		}
		if(res[0]!=res[1]&&res[1]!=res[2]&&res[2]!=res[3]&&res[0]!=res[2]&&res[0]!=res[3]&&res[1]!=res[3]){
			break;
		}
		ans++;
		n = ans;
	}
	
	cout << ans << endl;
	return 0;
}
