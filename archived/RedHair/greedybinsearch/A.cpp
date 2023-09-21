#include <bits/stdc++.h>
using namespace std;
#define MX 1000005

int ara[MX], n;
vector <int> primes;

void seive(){
    memset(ara, 0, sizeof ara);
    for(int i=2;i<MX;i++){
        if(!ara[i]){
            primes.push_back(i);
            for(int j=i*2;j<MX;j+=i){
                ara[j] = 1;
            }
        }
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
    seive();
    int cs = 1;
    while(scanf("%d", &n)!=EOF){
        if(!n) break;
        int ans = 0;
        for(int i=0;i<primes.size();i++){
            if(primes[i]>=n) break;
            int j = upper_bound(primes.begin(), primes.end(), n-primes[i])-primes.begin();
            j--;
            if(j<=i) break;
            ans+=(j-i);
        }
        printf("Case %d: %d\n", cs++, ans);
    }
    return 0;
}
