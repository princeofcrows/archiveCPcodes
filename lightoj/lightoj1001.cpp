#include <stdio.h>

int main(){
	int T, a, b, n, ara[125];
	scanf("%d", &T);
	n = 0;
	while(n<T){
		scanf("%d", &a);
		ara[n] = a;
		n++;
	}
	n = 0;
	while(n<T){
		if(ara[n]>11){
			printf("%d %d\n", 10, ara[n]-10);
		}
		else if(ara[n]== 0){
			printf("%d %d\n", 0, 0);
		}
		else{
			printf("%d %d\n", 1, ara[n]-1);
		}
		n++;
	}
	return 0;
}
