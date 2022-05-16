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
	char str[55], temp;
	ans = 0;
	cin >> n >> t;
	cin >> str;
	for(i=0; i<t; i++){
		for(j=0; j<n; j++){
			if(str[j]=='B'&&str[j+1]=='G'){
				str[j]='G';
				str[j+1]='B';
				j++;
			}
		}
	}
	cout << str << endl;
	return 0;
}
