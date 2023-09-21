#include <bits/stdc++.h>

using namespace std;

string str;
int vis[4];

int main(){
    //freopen("in.txt", "r", stdin);
    int a, b, t, c;
    cin >> t;
    b = 1;
    while(t--){
        cin >> str;
        a = vis[0] = vis[1] = vis[2] = 0;
        for(int i=0;i<str.length();i++){
            a+=(str[i]-'0');
            vis[(str[i]-'0')%3]++;
        }
        cout << "Case " << b++ << ": ";
        if(a%3){
            if(!vis[a%3]) cout << "T\n";
            else {
                if(vis[0]%2) cout << "T\n";
                else cout << "S\n";
            }
        }
        else{
            if(vis[0]%2) cout << "S\n";
            else cout << "T\n";
        }
    }
    return 0;
}
