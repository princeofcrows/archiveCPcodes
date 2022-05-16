#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int num[105];
int main() {
    int l, r, ans, temp, i, j;
    cin >> l >> r;
    temp = ans = 0;
    for(i=l; i<=r; i++){
    	for(j=i+1; j<=r; j++){
    		temp = (i^j);
    		if(ans<temp) ans = temp;
		}
	}
	cout << ans;
    return 0;
}

