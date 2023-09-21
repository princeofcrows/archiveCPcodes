#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

char str[51], str2[51];
int n;

bool check(int a){
	int j = a;
	for(int i=0; i<n; i++){
		if(j==n){
			j=0;
		}
		if(str[j]!=str[i]){
			return false;
		}
		j++;
	}
	return true;
}

int main(){
	//freopen("in.txt", "r", stdin);
	int i, j, ans;
	ans = 0;
	cin >> str;
	n = strlen(str);
	bool flag;
	for(i=0;i<n;i++){
		flag = check(i+1);
		if(flag==false){
			ans++;
		}
		else{
			break;
		}
	}
	cout << ans+1;
	return 0;
}
