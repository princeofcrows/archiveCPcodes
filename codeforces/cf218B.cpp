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
long long ara[100005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, r;
    cin >> n >> m;
    priority_queue <long long> q;
    priority_queue <long long, vector <long long> ,greater <long long> > q2;
    for(i=1;i<=m;i++){
        cin >> ara[i];
        q.push(ara[i]);
        q2.push(ara[i]);
    }
    ans = 0;
    for(i=1;i<=n;i++){
        a = q.top();
        q.pop();
        ans+=a;
        a--;
        if(a) q.push(a);
    }
    cout << ans <<" ";
    ans = 0;
    for(i=1;i<=n;i++){
        a = q2.top();
        q2.pop();
        ans+=a;
        a--;
        if(a) q2.push(a);
    }
    cout << ans;
    return 0;
}














