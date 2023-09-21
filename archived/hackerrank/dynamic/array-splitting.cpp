#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int ara[100005];

long long int arraysplit(long long int i, long long j, long long sum){
	if(sum%2) return 0;
	long long int sbsum = 0;
	long long int ans = 0;
	for(int l=i; l<=j; l++){
		sbsum += ara[l];
		if(sbsum>sum/2) return 0;
		if(sbsum==sum/2){
			ans = max(arraysplit(i, l, sbsum), arraysplit(l+1, j, sbsum)) + 1;
			break;
		}
	}
	return ans;
}

int main() {
    long long int n, t, sum, minmin;
    cin >> t;
    while(t--){
    	cin >> n;
    	sum = 0;
    	for(int i=0; i<n; i++){
    		cin >> ara[i];
    		sum+=ara[i];
		}
		if(!sum)cout << n-1 <<endl;
		else cout << arraysplit(0, n-1, sum) <<endl;
	}
    return 0;
}

