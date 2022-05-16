#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool prime(long long int n){
	if(n==1) return false;
	if(n==2) return true;
	if(n==3) return true;
	for(int i=2;i*i<=n; i++){
    	if(n%i==0){
    		return false;
		}
	}
	return true;
}


int main() {
    long long n, i, j, ans =0, l;
    cin >> i >> j;
    if(i%2==0) i++;
    if(j-i<2){
    	cout << 0;
    	return 0;
	}
    for(l=i+2;l<=j;l+=2){
    	if(prime(l-2)){
    		if(prime(l)) ans++;
		} 
	}
	cout << ans;
    return 0;
}

