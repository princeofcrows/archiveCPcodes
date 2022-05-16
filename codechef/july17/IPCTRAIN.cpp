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

string star[200000], str, str1, str2, str3;
long long T[100005], S[100005], ara[100005];
vector < pair <long long, long long> > ab;
vector <string> dat;
long long n, d;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, mx, b, k, l;
    cin >> t;
    while(t--){
        vector < vector <long long> > g(100005);
        cin >> n >> d;
        ans = 0;
        for(i=0;i<n;i++){
            cin >> a >> T[i] >> S[i];
            g[a].push_back(i);
            ans+=T[i]*S[i];
        }
        priority_queue < pair <long long, long long> > q;
        for(i=1;i<=d;i++){
            for(j=0;j<g[i].size();j++){
                q.push({S[g[i][j]], T[g[i][j]]});
            }
            if(!q.empty()){
                a = q.top().first;
                b = q.top().second;
                q.pop();
                ans -= a;
                b--;
                if(b) q.push({a, b});
            }
        }
        cout << ans << endl;
    }
    return 0;
}













