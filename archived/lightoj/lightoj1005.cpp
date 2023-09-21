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
	unsigned long long int t, j, i, k, n, ans, cas;
	cin >> t;
	for (cas = 1; cas<=t; cas++){
		cin >> n >> k;
		if(n<k) ans = 0;
		else if(k==0) ans = 1;
		else{
			ans = 1;
			i = 1;
			while(i<=k){
				ans = ans*n*n/i;
				i++;
				n--; 
			}
		}
		cout << "Case " << cas << ": " << ans << endl;
	}
	return 0;
}
