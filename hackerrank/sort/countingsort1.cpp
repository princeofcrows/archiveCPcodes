#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int cnt[105];

int main() {
    int n, a, i;
    cin >> n;
    for(i = 0; i<101; i++){
    	cnt[i] = 0;
	}
    for(i = 0; i<n; i++){
    	cin >> a;
    	cnt[a]++;
	}
	for(i = 0; i<101; i++){
    	cout << cnt[i] <<" ";
	}
	return 0;
}

