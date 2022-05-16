#include <bits/stdc++.h>
using namespace std;
#define int long long
int s[30], cat[60][60];

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int n, i, j;
    s[1] = 1;
    s[2] = 1;
    for(i=3;i<=26;i++){
        s[i] = ((6*i-9)*s[i-1] - (i-3)*s[i-2])/i;
        //cout << s[i] <<endl;
    }
    cat[0][0] = 1;
    for(i=1;i<=55;i++){
        for(j=0;j<=55;j++){
            if(j>i) cat[i][j] = 0;
            else if(j==i||j==0) cat[i][j] = 1;
            else cat[i][j] = cat[i-1][j-1] + cat[i-1][j];
        }
    }
    while(cin>>n){
        n--;
        cout << s[n+1] - cat[2*n][n]/(n+1) << endl;
    }
    return 0;
}
