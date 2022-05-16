#include <bits/stdc++.h>
using namespace std;
#define MX 1005

int ara[MX], ara2[MX];
int S[1000005];
int S2[1000005];
vector <int> x;
string str, str1;

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, n, a, b, l;
    cin >> n;
    a = 0;
    memset(S2, 0, sizeof S2);
    for(i=1;i<=n;i++){
        cin >> ara[i];
        a = __gcd(a, ara[i]);
        S2[ara[i]] = 1;
    }
    if(S2[a]==0){
        cout << -1;
        return 0;
    }
    for(i=1;i<=n;i++){
        x.push_back(a);
        x.push_back(ara[i]);
    }
    cout << x.size() << endl;
    for(j=0;j<x.size();j++){
        cout << x[j] <<" ";
    }
    return 0;
}
