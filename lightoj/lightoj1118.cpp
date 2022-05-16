#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	int caseno, j = 1;
	double a, b, c, d, area, x, y, h;
	cin >> caseno;
	while(caseno--){
		cin >> a >> b >> c >> d;
		x = ((b*b-d*d)/(a-c) + a - c)/2;
		y = (-(b*b-d*d)/(a-c) + a - c)/2;
		h = sqrt((b*b + d*d - x*x - y*y)/2);
		area = (a+c)*h/2;
		printf("Case %d: %.8lf\n", j, area);
		j++;
	}
	return 0;
}
