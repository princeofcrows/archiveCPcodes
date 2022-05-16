#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
#define ll long long int

int main() {
    long long int c, r, ans;
    cin >> r >> c;
    if(r%2){
    	ans = (r/2)*10+2*(c-1);
	}
	else{
		ans = (r/2-1)*10+2*c-1;
	}
	cout << ans;
    return 0;
}

