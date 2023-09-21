#include <bits/stdc++.h>
using namespace std;

string str;
int ara[30];

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double i, j, n, p1, g1, p2, g2, h1, h2;
    cin >> g1 >> p1 >> g2 >> p2;
    for(i=0;i<=g1;i++){
        if(floor(i*100/g1)==p1){
            h1 = i;
            break;
        }
    }
    for(i=0;i<=g2;i++){
        if(floor(i*100/g2)==p2){
            h2 = i;
        }
    }
    int ans = (int) (h2 - h1);
    int temp = (int) (g2 - g1);
    ans = min(temp, ans);
    cout << max(ans, 0);
    return 0;
}
