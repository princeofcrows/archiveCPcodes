#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <utility>
#include <cstdio>

using namespace std;

long long int rev(long long int a){
	long long int b = 0, temp = a;
	while(a%10==0){
		a/=10;
	}
	while(a!=0){
		b+=a%10;
		a/=10;
		b*=10;
	} 
	b/=10;
	return b;
}

int main(){
	long long int i , j, k;
	cin >> i >> j >> k;
	long long int ans = 0;
	for(int l=i; l<=j; l++){
		if(abs(l-rev(l))%k==0) ans++;
		//cout << l <<": " <<rev(l) << endl;
	}
	cout << ans ;
	return 0;
}
