#include <stdio.h>
#include <math.h>

int main(){
	double pi, r, res;
	int T, count;
	pi = 2 * acos (0.0) ;
	count = 0;
	r = 0;
	res = 0;
	scanf("%d", &T);
	while(count<T){
		scanf("%lf", &r);
		res = 4*r*r - pi*r*r + pow(10, -9);
		printf("Case %d: %0.2lf\n",count+1, res);
		count++;
	}
	return 0;
}
