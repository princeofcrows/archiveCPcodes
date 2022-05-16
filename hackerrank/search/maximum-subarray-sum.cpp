#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int num[100005];

int main(){
	long long int n, k, ans, temp, cnt, t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		num[0] = 0;
		for(int i = 1; i<=n; i++){
			cin >> temp;
			num[i]=num[i-1]+temp%k;
			num[i]%=k;
		}
		ans  = 0;
		temp = 0;
		cnt  = 0;
		for(int i = n; i>=1; i--){
			if(num[i]>ans) ans = num[i];
			for(int j = 1; j<i; j++){
				if((num[j]-num[i]+k)%k>ans) ans=(num[j]-num[i]+k)%k;
			}
		}
		cout <<ans <<endl;
	}
	return 0;
}
