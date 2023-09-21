#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int c, n, a, b, i, j, ans, t;
    vector <int> z;
    vector <int> tz;
    vector <pair<int, int> > ab;
    cin >> c >> n;
    for(i=0;i<c*n;i++){
        cin >> a >> b;
        ab.push_back({a, b});
    }
    for(i=1;i<=c;i++){
        z.push_back(i);
        tz.push_back(i);
    }
    ans = 999999999;
    while(1){
        vector <int> y;
        for(i=0;i<c*n;i++){
            y.push_back(z[ab[i].first-1]*1000+ab[i].second);
        }
        vector <int> x;
        for(int l=0;l<y.size();l++){
            j = upper_bound(x.begin(), x.end(), y[l])-x.begin();
            if(j==x.size()) x.push_back(y[l]);
            else x[j] = y[l];
        }
        t = c*n-(int)x.size();
        ans = min(ans, t);
        next_permutation(z.begin(), z.end());
        if(z==tz) break;
    }
    cout << ans;
    return 0;
}
