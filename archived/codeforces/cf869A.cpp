#include <bits/stdc++.h>
using namespace std;

int ara[2004], ara2[2004];
int dat[2000005];

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, a;
    memset(dat, 0, sizeof dat);
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &ara[i]);
        dat[ara[i]]++;
    }
    for(j=0;j<n;j++){
        scanf("%d", &ara2[i]);
        dat[ara2[i]]++;
    }
    a = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(dat[ara[i]^ara[j]]) a+=1;
        }
    }
    if(a%2==0) printf("Karen");
    else printf("Koyomi");
    return 0;
}
