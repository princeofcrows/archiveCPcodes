#include <bits/stdc++.h>
using namespace std;

int n, ara[20], ans, na;
int dp[16][(1<<15)+10];
int dp2[16][(1<<15)+10];

int ts(int mask, int At){
    if(mask==(1<<n)-1){
        return ara[At];
    }
    if(dp[At][mask]!=-1) return dp[At][mask];
    int ret = 0;
    for(int i=0;i<n;i++){
        if(!(mask&(1<<i))){
            if(mask!=0)ret = max(ret, ts(mask|(1<<i), i)+abs(ara[At]-ara[i]));
            else ret = max(ret, ts(mask|(1<<i), i)+ara[i]);
        }
    }
    return dp[At][mask] = ret;
}

int tsn(int mask, int At){
    //cout << mask <<" "<<At <<endl;
    if(mask==(1<<n)-1){
        return 1;
    }
    if(dp2[At][mask]!=-1) return dp2[At][mask];
    int ret = 0;
    int ret2 = 0;
    for(int i=0;i<n;i++){
        if(!(mask&(1<<i))){
            if(mask!=0)ret = max(ret, ts(mask|(1<<i), i)+abs(ara[At]-ara[i]));
            else ret = max(ret, ts(mask|(1<<i), i)+ara[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(!(mask&(1<<i))){
            if(mask!=0&&ts(mask|(1<<i), i)+abs(ara[At]-ara[i])==ret) ret2 += tsn(mask|(1<<i), i);
            else if(mask==0&&ts(mask|(1<<i), i)+ara[i]==ret) ret2 += tsn(mask|(1<<i), i);
        }
    }
    //cout << ret2<< endl;
    return dp2[At][mask] = ret2;
}

int main(){
    //freopen("in.txt", "r", stdin);
    while(cin >> n){
        if(!n) break;
        for(int i=0;i<n;i++){
            cin >> ara[i];
        }
        memset(dp, -1, sizeof dp);
        memset(dp2, -1, sizeof dp2);
        ans = ts(0, 0);
        na = tsn(0, 0);
        cout << ans+2*n <<" "<<na<< endl;
    }
    return 0;
}
