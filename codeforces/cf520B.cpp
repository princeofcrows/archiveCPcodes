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
	long long int n, t, i, j, k, l, m, ans;
	cin >> n >> m;
	ans = 0;
	while(n!=m){
		if(n>m){
			ans += n-m;
			break;
		}
		else if(n<m){
			if(m%2==0){
				m/=2;
				ans++;
			}
			else{
				m++;
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
