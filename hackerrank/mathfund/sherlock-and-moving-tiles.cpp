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
    double ans, i, j, n, l, s1, s2, q, tm;
    long long int t;
    cin >> l >> s1 >> s2;
    if(s1>s2){
    	ans = s1;
    	s1 = s2;
    	s2 = ans;
	}
    cin >> t;
    n = sqrt(2);
    //seive();
    while(t--){
    	cin >> q;
    	tm = (l-sqrt(q))*n/(s2-s1);
    	printf("%.6lf\n", tm);
	}
    return 0;
}

