#include <bits/stdc++.h>
using namespace std;
int ara[100000];

int main(){
    //freopen("in.txt", "r", stdin);
    int a, j, ans;
    while(scanf("%d", &a)){
        if(!a) break;
        memset(ara, 0, sizeof ara);
        j = 1;
        ara[a] = j;
        while(1){
            j++;
            a = (a*a)/100;
            a%=10000;
            if(ara[a]){
                ans = j-1;
                break;
            }
            ara[a] = j;
        }
        printf("%d\n", ans);
    }
    return 0;
}
