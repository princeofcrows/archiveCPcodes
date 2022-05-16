#include <queue>
#include <iostream>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

bool primet(long long int n){
	if(n==2||n==3) return true;
	if(n==1) return false;
	bool flag = true;
	for(int i = 2; i*i<=n; i++){
		if(n%i==0){
			flag = false;
			break;
		} 
	}
	return flag;
}

int main(){
	long long int n, k, g, t, temp, temp2, ans = 0;
	//seive();
	cin >> n;
	if(primet(n)) cout << 1 <<endl;
	else if(n%2==0||(n-2)>1&&primet(n-2)) cout << 2 <<endl;
	else cout << 3 <<endl;
	return 0;
}
