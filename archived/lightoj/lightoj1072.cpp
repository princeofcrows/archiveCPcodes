#include <stdio.h>
#include <math.h>
#define pi (3.141592653589793)

int main(){
	int t, count = 1, bh = 0;
	double bR = 0, sr = 0;
	scanf("%d", &t);
	while(t--){
		scanf("%lf%d", &bR, &bh);
		if(bh == 1){
			sr = bR;
		}
		else if(bh == 2){
			sr = bR/2;
		}
		else{
			sr = sin(pi/bh)*bR/(1+sin(pi/bh));
		}
		
		printf("Case %d: %.10lf\n", count, sr);
		count++;
	}
	return 0;
}
