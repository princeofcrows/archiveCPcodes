#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int sumd(long long int a){
	long long int sum = 0;
	while(a!=0){
		sum+=a%10;
		a/=10;
	}
	return sum;
}


int main() {
    long long n, i, i2, sum, sum2, ans, ans1;
    cin >> n;
    ans = 0;
    for(i=1;i*i<=n; i++){
    	if(n%i==0){
    		i2 = n/i;
    		sum = sumd(i);
    		if(sum>ans){
    			ans = sum;
    			ans1 = i;
			}
			else if(ans==sum&&ans1>i){
				ans1 = i;
			}
			sum2 = sumd(i2);
			if(sum2>ans){
    			ans = sum2;
    			ans1 = i2;
			}
			else if(ans==sum2&&ans1>i2){
				ans1 = i2;
			}
		}
	}
	cout << ans1;
    return 0;
}

