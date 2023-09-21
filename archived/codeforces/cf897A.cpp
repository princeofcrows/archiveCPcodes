#include <bits/stdc++.h>
#define MX 100005
using namespace std;
string str, str1, str2;

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, l, n, m, r;
    cin >> n >> m >> str;
    for(i=0;i<m;i++){
        cin >> l >> r >> str1 >> str2;
        for(j=l-1;j<r;j++){
            if(str[j]==str1[0]){
                str[j] = str2[0];
            }
        }
    }
    cout << str;
    return 0;
}
