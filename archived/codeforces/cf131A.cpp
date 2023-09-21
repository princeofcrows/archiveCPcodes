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
	char str[100], str2[100];
	cin >> str;
	n = strlen(str);
	flag = true;
	for(i=0; i<n; i++){
		if(str[i]<='Z' && str[i]>='A'){
			continue;
		}
		else if(i==0){
			continue;
		}
		else{
			flag = false;
			break;
		}
	}
	if (!flag) cout << str <<endl;
	else {
		for(i=0; i<n; i++){
			if(str[i]<='Z' && str[i]>='A'){
				cout << char(str[i]+32);
			}
			else if(i==0){
				cout << char(str[i]-32);
			}
		}
		cout << endl;
	}
	return 0;
}

