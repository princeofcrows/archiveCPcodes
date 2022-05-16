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
	long long int k, w, n, ans, l, i;
	bool flag;
	char str[5], temp;
	ans = 0;
	cin >> l;
	k = 10;
	while(l!=0){
		w = l%k;
		if(w==4||w==7){
			ans++;
		}
		l = l/k;
	}
	k = 10;
	flag = true;
	if(ans==0)	{
		flag = false;
		cout << "NO"<< endl;
		return 0;
	}
	i = 1;
	w = 0;
	while(ans!=0){
		w = ans%k;
		if(w==4||w==7){
			flag = true;
		}
		else{
			flag = false;
			cout << "NO"<< endl;
			break;
		}
		ans = ans/k;
	}
	if(flag) cout << "YES"<< endl;
	return 0;
}
