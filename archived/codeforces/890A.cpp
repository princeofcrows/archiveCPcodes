//princeofcrows

#include <bits/stdc++.h>
using namespace std;
int ara[10];

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i, j, a, l;
    a = 0;
    for(i=1;i<=6;i++){
        cin >> ara[i];
        a += ara[i];
    }
    if(a%2){
        cout << "NO";
        return 0;
    }
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            if(j==i) continue;
            for(l=1;l<=6;l++){
                if(j==l||l==i) continue;
                if((ara[i]+ara[j]+ara[l])*2==a){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
