#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
int ara[30005];


int main(){
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j, b;
	bool flag;
	
	cin >> n >> a;
	for(i = 1; i<n; i++){
		cin >> ara[i];
	}
	
	flag = false;
	b = 1;
	while(b<n){
		b += ara[b];
		if(b==a){
			flag = true;
			break;
		}
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
