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
long long ara[100005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <long long, long long> dat;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l, n, m;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<n-1;i++){
        a = min(ara[i+1], ara[i]);
        b = max(ara[i+1], ara[i]);
        for(j=i+1;j<n-1;j++){
            c = min(ara[j+1], ara[j]);
            d = max(ara[j+1], ara[j]);
            if(c>a&&c<b&&d>a&&d>b){
                cout << "yes";
                return 0;
            }
            if(c<a&&c<b&&d>a&&d<b){
                cout << "yes";
                return 0;
            }
        }
    }
    cout << "no";
    return 0;
}













