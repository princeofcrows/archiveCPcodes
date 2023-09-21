#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int a, ans, i, n, temp;
    cin >> a >> n;
    for(i=0; i<n; i++){
    	cin >> temp;
    	if(temp==a) ans = i;
	}
	cout << ans;
    return 0;
}
