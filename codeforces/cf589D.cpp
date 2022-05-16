#include <bits/stdc++.h>
using namespace std;
#define MAX 10004
double s[MAX], f[MAX], t[MAX], v[MAX], tf[MAX], tt, tt2;
int ans[MAX];

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, k, c, n, x, y;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> t[i] >> s[i] >> f[i];
        if(s[i]>f[i]) v[i] = -1.0;
        else v[i] = 1.0;
        tf[i] = t[i] + abs(s[i]-f[i]);
    }
    memset(ans, 0, sizeof ans);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[i]!=v[j]){
                tt = (s[i]-s[j]-v[i]*t[i]+v[j]*t[j])/(v[j]-v[i]);
                if(tt<=tf[i]&&tt<=tf[j]&&tt>=t[i]&&tt>=t[j]){
                    ans[j]++;
                    ans[i]++;
                }
            }
            else{
                tt = (s[j]-s[i])/v[i] + t[i];
                if(tt<=tf[i]&&tt>=t[i]&&tt==t[j]){
                    ans[j]++;
                    ans[i]++;
                    continue;
                }
                tt = (s[i]-s[j])/v[j] + t[j];
                if(tt<=tf[j]&&tt>=t[j]&&tt==t[i]){
                    ans[j]++;
                    ans[i]++;
                    continue;
                }
            }
        }
    }
    for(i=0;i<n;i++) cout << ans[i] << " ";
    return 0;
}
