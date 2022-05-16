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
vector < vector <long long> > g(100005);
bool flag;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l, n, m;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    cin >> m;
    for(i=0;i<m;i++){
        cin >> ara2[i];
    }
    mx = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ara2[j]%ara[i]==0){
                mx = max(ara2[j]/ara[i], mx);
            }
        }
    }
    ans = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ara2[j]%ara[i]==0){
                if(ara2[j]/ara[i]==mx){
                    ans++;
                }
            }
        }
    }
    cout << ans;
    return 0;
}













