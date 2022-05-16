#include <stdio.h>
#include <string.h>

int tree[100005];
int nmax;

void update(int idx, int jdx){
	while(idx<=nmax){
		tree[idx] += 1;
		idx += (idx&-idx); 
	}
	while(jdx<=nmax){
		tree[jdx] += -1;
		jdx += (jdx&-jdx); 
	}
}

int read(int idx){
	int sum = 0;
	while(idx>0){
		sum += tree[idx];
		idx -= (idx&-idx);
	}
	return sum;
}

int main(){
	int t, cas, q, i, b, v, stk, c, n;
	char a;
	scanf("%d", &t);
	for(cas = 1; cas<=t; cas++){
		printf("Case %d:\n", cas);
		char ara[100005];
		
		scanf("%s", ara);
		nmax = strlen(ara);
		memset(tree, 0,  sizeof(int)*(nmax+1));
		scanf("%d", &q);
		while(q--){
			getchar();
			scanf("%c", &a);
			 if(a=='I'){
				scanf("%d %d", &b, &v);
				update(b, v+1);
			}
			else if(a=='Q'){
				scanf("%d", &b);
				printf("%d\n", (ara[b-1]-'0')^(read(b)%2));
			}
		}
	}
	return 0;
}
