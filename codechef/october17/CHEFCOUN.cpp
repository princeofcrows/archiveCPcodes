#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, t;
    scanf("%d", &t);
    j = 1<<16;
    while(t--){
        scanf("%d", &n);
        for(i=1;i<=j-1;i++){
            printf("%d ", j);
        }
        for(i=j;i<=n;i++){
            printf("%d ", 1);
        }
        printf("\n");
    }
    return 0;
}
