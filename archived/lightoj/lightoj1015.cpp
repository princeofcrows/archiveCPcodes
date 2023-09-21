# include <stdio.h>

int main(){
	int T, count, intnum, intscan, temp;
	unsigned long long int sum;
	scanf("%d", &T);
	count = 0;
	if (T<=100){
		while(count<T){
		intnum = 0;
		intscan = 0;
		sum = 0;
		scanf("%d", &intnum);
		while(intscan<intnum){
			temp = 0;
			scanf("%d", &temp);
			if (temp>0){
				sum = sum + temp;
			}
			intscan++;
		}
		printf("Case %d: %d", count+1, sum);
		printf("\n");
		count++;
		}	
	}
	
	return 0;
}
