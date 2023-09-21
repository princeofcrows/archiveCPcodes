//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;
vector <pair <long long, long long> > ab;
vector <long long> x;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> n >> m;
    if(n==1){
        cout << 1;
        return 0;
    }
    if(n==2){
        cout << 1;
        return 0;
    }
    for(i=1;i<=m;i++){
        cin >> a >> b;
        ab.push_back({b, a});
        if(a==n){
            cout << b;
            return 0;
        }
    }
    for(i=1;i<=200;i++){
        for(j=0;j<ab.size();j++){
            a = ab[j].first;
            b = ab[j].second;
            if((b>(a-1)*i)&&(b<=a*i)) continue;
            else break;
        }
        if(j==ab.size()) x.push_back(i);
    }
    if((x.size()>1)){
        cout << -1;
    }
    else{
        a = x[0];
        ans = n/a+(bool)(n%a);
        cout << ans;
    }
    return 0;
}





















