#include <stdio.h>
#include <math.h>

int main(){
	int t, count = 1, time = 0, mf = 0, lf = 0;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &mf, &lf);
		time = 19+ abs(mf-lf)*4 +mf*4;
		printf("Case %d: %d\n", count, time);
		count++;
	}
	return 0;
}
