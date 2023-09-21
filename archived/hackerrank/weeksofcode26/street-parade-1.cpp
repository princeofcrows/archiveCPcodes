#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;

lli ara[1000006], diff[1000006];

int main() {
    lli n, h1, h2, m, ans, stp, mile;
    cin >> n;
    diff[0] = 9999999999;
    cin >> ara[0];
    for(int i=1; i<n; i++){
    	cin >> ara[i];
    	diff[i] = ara[i]-ara[i-1];
	}
	diff[n] = 9999999999;
	cin >> m >> h1 >> h2;
	stp = ara[0] - h2;
	ans = stp;
	mile = h2;
	for(int i=1; i<n; i++){
		if(mile>=m){
			break;
		}
    	if(diff[i]>=h1&&diff[i]<=h2){
    		mile+=diff[i];
		}
		else if(diff[i]<h1){
			mile = 0;
			ans = ara[i];
		}
		else if(diff[i]>h2){
			mile = h2;
			ans = ara[i]-h2;
		}
	}
	cout << ans;
    return 0;
}

