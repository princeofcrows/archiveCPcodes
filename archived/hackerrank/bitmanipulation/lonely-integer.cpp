#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int num[105];
int main() {
    int n, ans, i, j;
    cin >> n;
    for(i=0; i<n; i++) cin >> num[i];
    for(i=0; i<n; i++){
    	for(j=0; j<n; j++){
    		if(j!=i&&(num[j]^num[i])==0){
    			break;
			}
		}
		if(j==n){
			ans = num[i];
			break;
		}
	}
	cout << ans;
    return 0;
}

