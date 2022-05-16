//princ30fcr0ws
#include <bits/stdc++.h>

using namespace std;
#define MX 100005
#define int long long

int ara[MX], ara2[MX];
vector <int> x;

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int n, i, j, a;
    a = 0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
        a+=ara[i];
        //cout << ara[i] << " ";
    }
    for(i=0;i<n;i++){
        cin >> ara2[i];
        x.push_back(ara2[i]);
    }
    sort(x.rbegin(), x.rend());
    if(x[0]+x[1]>=a){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
