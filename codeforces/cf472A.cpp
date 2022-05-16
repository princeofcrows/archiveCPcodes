#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int prime[1000005];
void seive(){
	memset(prime, 0, sizeof prime);
	for(int i=2; i<1000005; i++){
		if(!prime[i]){
			for(int j=2*i; j<1000005; j+=i){
				prime[j] = 1;
			}
		}
	}
}

int main(){
	long long int n, x, y, z, a, b, c;
	bool flag;
	char str[105], temp, str2[105];
	seive();
	cin >> n;
	for(int i=n-4; i>2; i--){
		if(prime[i]&&prime[n-i]){
			cout << n-i << " " << i << endl;
			break;
		}
	}
	
	return 0;
}
