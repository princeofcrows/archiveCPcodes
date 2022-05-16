#include <bits/stdc++.h>
using namespace std;
string str;
int ara[30];


int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> str;
    for(int i=0;i<26;i++){
        cin >> ara[i];
    }
    int ans = 0;
    for(int i=0;i<str.length();i++){
        ans+=ara[str[i]-'a'];
    }
    cout << ans;
    return 0;
}
