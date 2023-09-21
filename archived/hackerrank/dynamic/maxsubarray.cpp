#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int ara[100005];

long long int maxsubarray(long long int n, long long min, bool flag){
	if(!flag) return min;
	long long max, tempmax;
	tempmax = max = 0;
	for(int i=0; i<n; i++){
		tempmax += ara[i];
		if(tempmax<0){
			tempmax = 0;
		}
		else if(max<tempmax){
			max = tempmax;
		}
	}
	return max;
}


int main() {
    long long int n, t, sum, minmin;
    cin >> t;
    while(t--){
    	cin >> n;
    	sum = 0;
    	minmin = -100004;
    	for(int i=0; i<n; i++){
    		cin >> ara[i];
    		if(ara[i]>0) sum+=ara[i];
    		if(ara[i]<0&&ara[i]>minmin) minmin = ara[i];
		}
		bool flag = true;
		if(sum==0){
			sum = minmin;
			flag = false;
		}
		cout << maxsubarray(n, minmin, flag) << " " << sum<<endl;
	}
    return 0;
}

