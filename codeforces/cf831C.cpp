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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <long long> z;
map <long long, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> k >> n;
    for(i=0;i<k;i++){
        cin >> ara[i];
    }
    for(i=0;i<n;i++){
        cin >> a;
        x.push_back(a);
    }
    a = 0;
    for(i=0;i<k;i++){
        a += ara[i];
        y.push_back(a);
    }
    sort(y.begin(), y.end());
    ans = 0;
    a = x[0];
    for(i=0;i<k;i++){
        b = a-y[i];
        z.clear();
        for(j=0;j<k;j++){
            z.push_back(b+y[j]);
        }
        c = 1;
        for(j=0;j<n;j++){
            if(!binary_search(z.begin(), z.end(), x[j])){
                c = 0;
                break;
            }
        }
        if(c){
            if(!dat[b]) {
                dat[b] = 1;
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}













