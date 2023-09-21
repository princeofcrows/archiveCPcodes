#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int n, ans;
    ans = 1;
    cin >> n;
    while(n>0){
    	if(!(n&1)) ans*=2;
    	n>>=1;
	}
	cout << ans;
    return 0;
}

