#include <cstdio>
#include <cctype>
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

long long int ara[10005];

int main(){
    //freopen("in.txt", "r", stdin);
	long long int t, csn = 1, ans, n, i, a, b, q, qw, k, temp, m;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		for(i = 0; i<n; i++){
			scanf("%lld", &ara[i]);
		}
		printf("Case %lld:\n", csn++);
        scanf("%lld", &q);
        qw = 1;
        while(q--){
            scanf("%lld", &k);
            ans = 0;
            m = n;
            for(i=0; i<n; i++){
                temp = ara[i]%k;
                a = ara[i]/k;
                ans ^= temp;
                if(a%2) ans ^= k;
            }
            printf("Query %lld: %s\n",qw++,ans==0?"Lose":"Win");
        }
	}
	return 0;
}
