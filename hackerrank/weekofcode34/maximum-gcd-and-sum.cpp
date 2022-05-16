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

string star[200000], str, str1;
long long ara[1000005], ara2[1000005], ara3[1000005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <long long, long long> dat;
priority_queue <pair<long long, long long> > q;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    memset(ara, 0, sizeof ara);
    memset(ara2, 0, sizeof ara2);
    memset(ara3, 0, sizeof ara3);
    for(i=2;i<=1000000;i++){
        if(!ara3[i]){
            for(j=i*2;j<=1000000;j+=i){
                ara3[j] = 1;
            }
        }
    }
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        x.push_back(a);

    }
    for(i=0;i<n;i++){
        cin >> a;
        y.push_back(a);
    }
    sort(x.rbegin(), x.rend());
    sort(y.rbegin(), y.rend());
    for(i=0;i<n;i++){
        a = x[i];
        if(ara[a]) continue;
        if(!ara3[a]){
            ara[a] = max(a, ara[a]);
            ara[1] = max(a, ara[1]);
            continue;
        }
        for(j=1;j*j<=a;j++){
            if(a%j==0){
                ara[j] = a;
                ara[a/j] = a;
            }
        }

    }
    for(i=0;i<n;i++){
        a = y[i];
        if(ara2[a]) continue;
        if(!ara3[a]){
            ara2[a] = max(a, ara2[a]);
            ara2[1] = max(a, ara2[1]);
            continue;
        }
        for(j=1;j*j<=a;j++){
            if(a%j==0){
                ara2[j] = a;
                ara2[a/j] = a;
            }
        }
    }
    for(i=1;i<=1000000;i++){
        if(ara[i]&&ara2[i]){
            ans = ara[i]+ara2[i];
        }
    }
    cout << ans;
    return 0;
}













