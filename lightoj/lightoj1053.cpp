#include <stdio.h>

int main(){
	int a, b, c, sum, temp;
	temp = 0;
	int T, count = 1;
	scanf("%d", &T);
	while(T--){
		scanf("%d%d%d", &a, &b, &c);
		
		if(a<b){
			temp = a;
			a = b;
			b = temp;
		}
		if(a<c){
			temp = a;
			a = c;
			c = temp;
		}
	
		if(a*a == b*b + c*c){
			printf("Case %d: yes\n", count);
		}
		else{
			printf("Case %d: no\n", count);
		}
		count ++;
	}
	return 0;
}
