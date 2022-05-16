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
	long long int n, k, i, a, ans, m, tmp, j, b;
	bool flag;
	char str[205], str2[205];
	cin >> str;
	cin >> str2;
	n = strlen(str);
	for(i = 0; i<n; i++){
		if(str[i]==str2[i]) cout << 0;
		else cout << 1;
	}
	cout << endl;
	return 0;
}
