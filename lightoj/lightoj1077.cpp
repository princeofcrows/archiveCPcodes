#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>

using namespace std;
#define nmax 1000000
#define mod 1000003

long long int gcd(long int a, long int b){
	if(a%b==0) return b;
	return gcd(b, a%b);
}

int main(){
	long long int t, j, k, a, b, sum, suff, x1, x2, y1, y2;
	cin >> t;
	for (j = 1; j<=t; j++){
		cin >> x1>> y1 >> x2 >> y2;
		if(x1==x2){
			printf("Case %d: %lld\n", j, abs(y1-y2)+1);
			continue;
		}
		if(y1==y2){
			printf("Case %d: %lld\n", j, abs(x1-x2)+1);
			continue;
		}
		if(y1==y2&&x1==x2){
			printf("Case %d: %d\n", j, 1);
			continue;
		}
		a = abs(x1-x2);
		b = abs(y1-y2);
		printf("Case %d: %lld\n", j, gcd(a, b)+1);
	}
	return 0;
}
