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
string star[200000], str, str1, str2;
long long ara[300005], ara2[300005], ara3[300005];
vector <long long> x;
vector <long long> y;
vector < pair <long long, long long> > ab;
map <double, set <long long> > dat;
map <double, set <double> > dat3;
map <pair<double, double>, set <long long>> dat4;
map <double, long long> dat2;
vector < vector <long long> > g(100005);


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c;
    cin >> n >> k;
    for(i=1;i<=n;i++){
        cin >> a;
        ab.push_back({a, i});
        ara3[i] = a;
    }
    sort(ab.rbegin(), ab.rend());
    memset(ara2, -1, sizeof ara2);
    j = 1;
    ans = 0;
    for(i=0;i<n;i++){
        while(ara2[j]!=-1){
            j++;
        }
        if(k+j>=ab[i].second){
            ara2[j] = ab[i].second;
            ara[ab[i].second] = j;
            j++;
        }
        else{
            ara[ab[i].second] = ab[i].second-k;
            ara2[ab[i].second-k] = ab[i].second;
        }
    }
    for(i=1;i<=n;i++){
        ans+=(ara[i]+k-i)*ara3[i];
    }
    cout << ans << endl;
    for(i=1;i<=n;i++){
       cout << ara[i]+k <<" ";
    }
    return 0;
}





















