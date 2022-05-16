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
long long ara[200005], ara2[200005], ara3[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
set <char> st;
map <long long, long long> dat;
queue <long long> q[200005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f;
    cin >> n;
    memset(ara2, 0, sizeof ara2);
    for(i=1;i<=n;i++){
        cin >> ara[i];
        ara2[ara[i]]++;
    }
    for(i=1;i<=n;i++){
        if(!ara2[i]){
            x.push_back(i);
        }
    }
    ans = 0;
    j = 0;
    memset(ara3, 0, sizeof ara3);
    for(i=1;i<=n;i++){
        if(ara2[ara[i]]>=2){
            if(x[j]>ara[i]){
                if(ara3[ara[i]]==-1){
                    ara2[ara[i]]--;
                    ara[i] = x[j];
                    j++;
                    ans++;
                }
                else{
                    ara3[ara[i]] = -1;
                }
            }
            else{
                ara2[ara[i]]--;
                ara[i] = x[j];
                j++;
                ans++;
            }
        }
    }
    cout << ans << endl;
    for(i=1;i<=n;i++){
        cout << ara[i] <<" ";
    }
    return 0;
}







