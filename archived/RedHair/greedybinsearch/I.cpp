#include <bits/stdc++.h>

using namespace std;

#define int long long

vector <int> rm;
vector <int> pm;

bool func(int m, int a){
    vector <int> x;
    vector <int> y;
    int i;
    for(i=0;i<m;i++){
        x.push_back(pm[i]);
        y.push_back(rm[i]);
    }
    reverse(x.begin(), x.end());
    for(i=0;i<m;i++){
        if(y[i]>x[i]){
            a -= (y[i]-x[i]);
        }
    }
    if(a>=0) return true;
    else return false;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int a, n, m, ans1, ans2, i, b, j, c, ex;
    cin >> n >> m >> a;
    for(i=0;i<n;i++){
        cin >> b;
        pm.push_back(b);
    }
    for(i=0;i<m;i++){
        cin >> b;
        rm.push_back(b);
    }
    sort(rm.begin(), rm.end());
    sort(pm.rbegin(), pm.rend());
    int l = 0;
    int h = n;
    while(l<h){
        int mid = (l+h)/2;
        if(func(mid, a)) l = mid+1;
        else h = mid-1;
    }
    j = min(n, m);
    ans1 = -1;
    ex = 0;
    for(i=max(ex, l-5); i<=min(j, l+5); i++){
        if(!func(i, a)){
            ans1 = i-1;
            break;
        }
    }
    if(ans1==-1) ans1 = j;
    ans2 = 0;
    for(i=0;i<ans1;i++) ans2+=rm[i];
    ans2-=a;
    ans2 = max(ans2, ex);
    cout << ans1 << " " << ans2;
    return 0;
}










