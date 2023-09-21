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
	long long int k, w, n, ans, l, i, t, j;
	bool flag;
	char str[105], temp, str2[105];
	ans = 0;
	cin >> str;
	cin >> str2;
	t = strlen(str);
	flag = true;
	for(i=0; i<t; i++){
		if(str[i]!=str2[t-i-1]){
			flag = false;
			break;
		}
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
