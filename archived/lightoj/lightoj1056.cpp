#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cmath>
#include <cstdio>


using namespace std;

int main(){
	double r, i, a, m, w, l;
	int t, j;
	cin >> t;
	char ch;
	for (j = 1; j<=t; j++){
		cin >> l >> ch >> w;
		r = sqrt(l*l + w*w);
		i = atan(w/l);
		a = r*i;
		m = 400/(2*l+2*a);
		printf("Case %d: %.10lf %.10lf", j, l*m, w*m);
		cout <<endl;
	}
	return 0;
}
