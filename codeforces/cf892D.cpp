#include <bits/stdc++.h>

using namespace std;
#define MX 25
#define int long long

int ara[MX];
vector <pair <int, int> > x;

bool comp(pair <int, int> i, pair <int, int> j){
    return i.second<j.second;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j, a, t;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> ara[i];
        x.push_back({ara[i], i});
    }
    sort(x.begin(), x.end());
    a = x[0].first;
    for(i=1;i<n;i++){
        x[i-1].first = x[i].first;
    }
    x[n-1].first = a;
    sort(x.begin(), x.end(), comp);
    for(i=0;i<n;i++){
        cout << x[i].first <<" ";
    }
    return 0;
}











