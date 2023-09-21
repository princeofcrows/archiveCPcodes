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
	long long int n, k, i, a, ans, c1, c2, c3, tmp, j;
	bool flag;
	char str[205], temp;
	cin >> str;
	n = strlen(str);
	flag = false;
	j = 0;
	for(i=0; i<n; i++){
		if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
			str[i] = '*';
			str[i+1] = '*';
			str[i+2] = '*';
			i+=2;
		}
	}
	if(str[0]!='*'){
		cout << str[0];
		flag = true;
	}
	for(i=1; i<n; i++){
		if(str[i]!='*'&&str[i-1]=='*'&&!flag){
			cout << str[i];
			flag = true;
		}
		else if(str[i]!='*'&&str[i-1]=='*'&&flag){
			cout << " " << str[i];
		}
		else if(str[i]!='*'&&flag){
			cout << str[i];
		}
	}
	cout << endl;
}
