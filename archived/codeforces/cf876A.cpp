#include <bits/stdc++.h>
using namespace std;

int ara[2004], ara2[2004];
int dat[2000005];

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, a, b, c, ans;
    cin >> n >> a >> b >> c;
    j = 1;
    ans = 0;
    for(i=2;i<=n;i++){
        if(j==1){
            if(a<b){
                j = 2;
                ans += a;
            }
            else{
                j = 3;
                ans += b;
            }
        }
        else if(j==2){
            if(a<c){
                j = 1;
                ans += a;
            }
            else{
                j = 3;
                ans += c;
            }
        }
        else if(j==3){
            if(b<c){
                j = 1;
                ans += b;
            }
            else{
                j = 2;
                ans += c;
            }
        }
    }
    cout << ans;
    return 0;
}
