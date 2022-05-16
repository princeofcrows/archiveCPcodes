
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
	long long int n, k, i, a, temp, ans, c1, c0;
	bool flag;
	char str[105];
	cin >> str;
	n = strlen(str);
	c1 = c0 = 0;
	flag = false;
	for(i=0; i<n; i++){
		if(str[i] == '0'){
			c0++;
			c1 = 0;
			if(c0==7){
				flag = true;
				break;
			}
		}
		else if(str[i] == '1'){
			c1++;
			c0 = 0;
			if(c1==7){
				flag = true;
				break;
			}
		}
	}
	
	if(flag) cout << "YES" <<endl;
	else cout << "NO" <<endl;
	return 0;
}
