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
	long long int n, k, i, a, ans, c1, c2, c3, tmp;
	bool flag;
	char str[105], temp;
	cin >> str;
	n = strlen(str);
	flag = false;
	for(i=0; i<n; i++){
		if(str[i] == 'H'||str[i] == 'Q'||str[i] == '9'){
			flag = true;
			cout << "YES" << endl;
			break;
		}
	}
	if(!flag)	cout << "NO" << endl;
	return 0;
}
