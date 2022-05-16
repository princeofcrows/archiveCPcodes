#include <bits/stdc++.h>
using namespace std;

int ara[100005], rem[100005];

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, a, b, c, ans, k, m;
    cin >> n >> k >> m;
    memset(rem, 0, sizeof rem);
    for(i=0;i<n;i++){
        cin >> ara[i];
        rem[ara[i]%m]++;
    }
    for(i=0;i<m;i++){
        if(rem[i]>=k){
            cout << "Yes\n";
            c = 0;
            for(j=0;j<n;j++){
                if(ara[j]%m==i){
                    cout << ara[j] <<" ";
                    c++;
                    if(c==k) break;
                }
            }
            return 0;
        }
    }
    cout << "No";
    return 0;
}
