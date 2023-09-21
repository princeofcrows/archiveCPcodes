#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, m, a, b, c, t;
    cin >> n;
    a = 1;
    b = 2;
    c = 3;
    for(i=1;i<=n;i++){
        cin >> m;
        if(m==a){
            t = b;
            b = c;
            c = t;
        }
        else if(m==b){
            t = a;
            a = c;
            c = t;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
