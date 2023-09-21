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
	long long int n, m, a, ans, x, y;
	
	cin >> n;
	if(n==0){
		cout << 1;
		return 0;
	}
	n = n%4;
	if(n==1) cout << 8;
	if(n==2) cout << 4;
	if(n==3) cout << 2;
	if(n==0) cout << 6;
	return 0;
}
