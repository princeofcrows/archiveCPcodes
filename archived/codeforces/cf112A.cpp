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
	long long int n, k, i, a, temp, ans, c1, c2;
	bool flag;
	string str, str2;
	cin >> str;
	cin >> str2;
	n = str.length();
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
	
	c1 = c2 = 0;
	ans = 0;
	
	for(i=0; i<n; i++){
		c1 = (int) str[i];
		c2 = (int) str2[i];
		if(c1<c2){
			ans = -1;
			break;
		} 
		else if(c1>c2){
			ans = 1;
			break;
		} 
	}
	cout << ans <<endl;
	return 0;
}

