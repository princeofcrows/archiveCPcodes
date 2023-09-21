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
	long long int m, n, ans, l, i, t, j, a, d, c, swap, temp;
	bool flag;
	char str[55];
	cin >> n ;
	ans = 0;
	temp = 0;
	d = 0;
	for(i = 1; i<=n; i++){
		cin >> a;
		if(a>=d){
			temp++;
			if(temp>=ans){
				ans = temp;
			}
		}
		else{
			temp = 1;
		}
		d = a;
	}
	
	cout << ans << endl;
	return 0;
}
