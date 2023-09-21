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



int main(){
	long long int t, j, n, k, b, sum, suff;
	cin >> t;
	for (j = 1; j<=t; j++){
		char a[205];
		scanf("%s %lld", a, &b);
		if(b<0) b = -1*b;
		n = strlen(a);
		sum = 0;
		suff = 1;
		for (int i = 0; i<n; i++){
			if(a[i]=='-'){
				continue;
			}
			sum += (a[i]-'0');
			if(sum>=b){
				sum%=b;
				suff = 1;
			}
			sum *= 10;
		}
		if(sum==0){
			printf("Case %lld: divisible\n",j);	
		}
	    else{
	    	printf("Case %lld: not divisible\n",j);
		}
	}
	return 0;
}
