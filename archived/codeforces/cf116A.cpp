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
	long long int n, k, i, a, temp, ans, b;
	bool flag;
	string str, str2;
	cin >> n;
	temp = ans = 0;
	for(i=0; i<n; i+=1){
		cin >> a >> b;
		temp += b - a;
		if(temp>ans) ans = temp;
	}
	cout << ans << endl;
	return 0;
}
