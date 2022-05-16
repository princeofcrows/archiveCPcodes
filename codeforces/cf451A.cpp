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
	cin >> n >> m;
	flag = true;
	while(n*m!=0){
		n--;
		m--;
		flag = !flag;
	}
	if(flag) cout << "Akshat" << endl;
	else cout << "Malvika" << endl;
	return 0;
}
