#include <stdio.h>

int main(){
	int T, t, pali, rem, rev, tpal;
	scanf("%d", &T);
	t = 1;
	while(T--) {
		scanf("%d", &pali);
		tpal = pali;
		rev = 0;
		while(tpal!=0){
			rem = tpal%10;
			rev = rev*10 +rem;
			tpal/=10;
		}
		
		if(pali==rev){
			printf("Case %d: Yes\n", t);
		}
		else{
			printf("Case %d: No\n", t);
		}
		t++;
	}
	return 0;	
}
