#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define ll long long int

bool prime[100];

void seive(){
	memset(prime, true, sizeof prime);
	for(int i=2; i<100; i++){
		if(prime[i]){
			for(int j=i*2; j<100;j+=i){
				prime[j] = false;
			}
		}
	}
}

int main() {
    unsigned long long int t, ans, i, j, n;
    cin >> t;
    seive();
    while(t--){
    	cin >> n;
    	ans = i = 1;
    	j = 0;
    	for(i=2; ans<=n; i++){
    		if(prime[i]){
    			ans*=i;
    			j++;
			}
		}
		cout << --j <<endl;
	}
    return 0;
}

