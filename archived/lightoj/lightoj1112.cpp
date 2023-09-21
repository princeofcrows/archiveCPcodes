#include <stdio.h>
#include <string.h>

int ara[100005], data[100005];
int nmax;
void update(int a, int idx){
	while(idx<=nmax){
		ara[idx] += a;
		idx += (idx&-idx); 
	}
}

int read(int idx){
	int sum = 0;
	while(idx>0){
		sum += ara[idx];
		idx -= (idx&-idx);
	}
	return sum;
}

int main(){
	int t, cas, q, i, poor, b, a, v, stk, c, n;
	scanf("%d", &t);
	for(cas = 1; cas<=t; cas++){
		scanf("%d%d", &n, &q);
		i = 1;
		memset(ara, 0, sizeof ara);
		nmax = n;
		
		while(n--){
			scanf("%d", &data[i]);
			update(data[i],i);
			i++;
		}
		printf("Case %d:\n", cas);
		while(q--){
			scanf("%d", &a);
			if(a==1){
				scanf("%d", &b);
				update(-data[b+1], b+1);
				printf("%d\n", data[b+1]);
				data[b+1] = 0;
			}
			else if(a==2){
				scanf("%d%d", &b, &v);
				data[b+1]+=v;
				update(v, b+1);
			}
			else if(a==3){
				scanf("%d%d", &c, &b);
				printf("%d\n", (read(b+1)-read(c)));
			}
		}
	}
	return 0;
}
