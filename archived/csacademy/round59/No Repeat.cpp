#include <bits/stdc++.h>
using namespace std;

string str;
int ara[30];

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, n;
    cin >> n;
    cin >> str;
    memset(ara, 0, sizeof ara);
    for(i=0;i<n;i++){
        ara[str[i]-'a']++;
    }
    for(i=0;i<n;i++){
        if(ara[str[i]-'a']==1){
            cout << str[i] ;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
