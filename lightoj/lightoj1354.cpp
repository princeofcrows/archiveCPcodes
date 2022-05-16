#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <utility>

using namespace std;

int bin[257];
void binconv(int i){
	int temp, k=1;
	temp = i;
	bin[temp] = 0;
	
	while(i!=0){
		bin[temp] = bin[temp] + (i%2)*k;
		i = i/2;
		k = k*10;
	}
}

int main(){
	int caseno, t = 1, a, b, c, d, i =0, ba, bb, bc, bd;
	char x, ib[40];
	while(i<=255){
		binconv(i);
		i++;
	}
	
	cin >> caseno;
	while(caseno--){
		scanf("%d%c%d%c%d%c%d", &a,&x, &b,&x, &c,&x, &d);
		scanf("%d%c%d%c%d%c%d", &ba, &x, &bb, &x, &bc, &x, &bd);
		if(bin[a]==ba && bin[b]==bb && bin[c]==bc && bin[d]==bd) 
			cout << "Case " << t <<": Yes\n";
		else
			cout << "Case " << t <<": No\n";
		t++;
	}
	return 0;
}
