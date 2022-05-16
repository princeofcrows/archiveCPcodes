#include <bits/stdc++.h>
using namespace std;
#define MX 200002
int ara[MX];

int main(){
    //freopen("in.txt", "r", stdin);
    int t, n, k, a;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &k);
        memset(ara, -1, sizeof ara);
        for(int i=0;i<n;i++){
            scanf("%d", &a);
            ara[a] = 1;
        }
        for(int i=0;i<MX;i++){
            if(ara[i]==-1){
                k--;
                if(k==-1){
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}
