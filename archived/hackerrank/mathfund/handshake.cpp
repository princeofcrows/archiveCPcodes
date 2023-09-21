#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    cin >> t;
    while(t--){
    	cin >> n;
    	cout << n*(n-1)/2 <<endl;
	}
    
    return 0;
}

