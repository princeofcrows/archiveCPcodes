#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define lli long long int

int main() {
	//freopen("in.txt", "r", stdin);
    lli t, ans, i, j, n;
    cin >> t;
    while(t--){
    	cin >> n;
    	lli num[n+5], temp;
    	vector <lli> ara;
    	num[0]=0;
    	for(int i =0; i<n; i++){
    		cin >> temp;
    		ara.push_back(temp);
		}
		sort(ara.begin(), ara.end());
		for(int i =1; i<n; i++){
    		num[i] = (ara[i]-ara[0]);
		}
		lli sum[6];
		ans = 1000000000;
		for(int i=0; i<6; i++){
			sum[i] = 0;
			for(int j= 0; j<n; j++){
				sum[i]+=(num[j]+i)/5+((num[j]+i)%5)/2+((num[j]+i)%5)%2;
			}
			ans = min(ans, sum[i]);
		}
		
		cout<< ans <<endl;;
	}
    return 0;
}

