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
priority_queue <double, vector<double>, greater<double> > q;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, b, mx, d, l;
    double k, a;
    cin >> n >> k ;

    for(i=0;i<n;i++){
        cin >> a;
        q.push(a);
    }
    ans = 0;
    while(!q.empty()){
        a = q.top();
        q.pop();
        if((a)>(k*2)){
            ans++;
            k = k*2;
            q.push(a);
        }
        else if(a>k){
            k = a;
        }
    }
    cout << ans;
    return 0;
}













