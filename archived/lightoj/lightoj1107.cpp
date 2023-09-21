#include <stdio.h>

int main(){
	int T, count = 1, x1, x2, y1, y2, seccase, x, y;
	scanf("%d", &T);
	while(T--){
		seccase = 0;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		scanf("%d", &seccase);
		printf("Case %d:\n", count);
		while(seccase--){
			scanf("%d%d", &x, &y);
			if(x>=x1&&x<=x2&&y>=y1&&y<=y2) printf("Yes\n");
			else printf("No\n");
		}
		count++;
	}
	return 0;
}
