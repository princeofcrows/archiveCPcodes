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
long long ara[100005], ara2[100005];
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
    cin >> n ;
    a = 99999999999;
    for(i=1;i<=9;i++){
        cin >> ara[i];
        ab.push_back({ara[i], i});
    }
    sort(ab.begin(), ab.end());
    a = n/ab[0].first;
    j = ab[0].second;
    if(!a){
        cout << -1;
        return 0;
    }
    for(i=1;i<=a;i++) x.push_back(j);
    b = n - a*ara[j];
    for(i=0;i<a;i++){
        for(l=9;l>=j;l--){
            if(b+ara[j]-ara[l]>=0){
                x[i] = l;
                b = b+ara[j]-ara[l];
                break;
            }
        }
    }
    for(i=0;i<a;i++) cout << x[i];
    return 0;
}













