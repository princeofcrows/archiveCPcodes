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

int main(){
	long long int n, k, g, t, temp, temp2, ans = 0;
	//seive();
	cin >> n;
	if(n<=3){
		cout << n-1;
		return 0;
	}
	temp = 1, temp2 = 1;
	for( int i = 1; ;i++){
		ans = temp;
		temp+=temp2;
		temp2= ans;
		if(temp>n){
			cout << --i;
			break;
		}
		else if(temp==n){
			cout << i;
			break;
		}
	}
	return 0;
}
