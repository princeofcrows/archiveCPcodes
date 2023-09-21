#include <bits/stdc++.h>

using namespace std;

string str;
int vis[50][50];

int main(){
    //freopen("in.txt", "r", stdin);
    int a, b, t, c, n, m;
    cin >> t;
    b = 1;
    while(t--){
        cin >> n >> m >> a >> b;
        c = a;
        c ^= (n-a-1);
        c ^= (m-b-1);
        c ^= b;
        if(c) cout << "Gretel\n";
        else cout << "Hansel\n";
    }
    return 0;
}
