#include <stdio.h>
#include <math.h>

int main(){
	int caseno, count;
	long long time, inroot, row, col;
	double root, temproot;
	count = 1;
	scanf("%d", &caseno);
	while(caseno--){
		scanf("%lld", &time);
		root = (double)time;
		root = sqrt(root);
		inroot = (long long int)root;
		temproot = (double)inroot;
		if(root == temproot){
			if(inroot%2 == 0) {
				row =  1;
				col = inroot;
			}
			else{
				col = 1;
				row = inroot;
			}
		}
		else if(inroot%2 == 0){
			if (root> (temproot+0.5)){
				col = (inroot+1)*(inroot+1) - time + 1;
				row = inroot + 1;
			}
			else if (root< (temproot+0.5)){
				col = inroot+1;
				row = -(inroot)*(inroot) + time;
			}
		}
		else {
			if (root> (temproot+0.5)){
				row = (inroot+1)*(inroot+1) - time+1;
				col = inroot + 1;
			}
			else if (root< (temproot+0.5)){
				row = inroot+1;
				col = -(inroot)*(inroot) + time ;
			}
		}
		
		printf("Case %d: %lld %lld\n", count, col, row);
		count++;
	}
	
	return 0;
}
