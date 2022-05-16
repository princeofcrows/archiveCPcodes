#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>

using namespace std;

double bisection(double x, double y, double c){
	double d, hi, lo, ct, lx, ly;
	int count = 50;
	hi = y;
	lo = 0;
	ct = 0;
	while(count--){
		d = (hi+lo)/2;
		lx = sqrt(x*x-d*d);
		ly = sqrt(y*y-d*d);
		ct = (lx*ly)/(lx+ly);
		if(ct<c)	hi = d;
		else	lo = d;
	}
	return d;
}

int main(){
	int t, j;
	double x, y, c, a;
	cin >> t;
	for (j = 1; j<=t; j++){
		
		cin >> x >> y >> c;
		if(x<y){
			a = x;
			x = y;
			y = a;
		}
		cout << "Case "<< j << ": ";
		printf("%.08lf\n", bisection(x, y, c));
	}
	return 0;
}
