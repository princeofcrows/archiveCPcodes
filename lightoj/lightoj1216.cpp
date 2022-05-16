#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	int caseno, j = 1;
	double r1, r2, h, p, r3, area, x;
	cin >> caseno;
	while(caseno--){
		cin >> r1 >> r2 >> h >> p;
		r3 = (r1 - r2)*p/h+r2;
		x = h*r2/(r1-r2);
		area = M_PI/3*(r3*r3*(p+x) - r2*r2*x);
		printf("Case %d: %.8lf\n", j, area);
		j++;
	}
	return 0;
}
