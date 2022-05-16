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
long long ara[100005];
double ara2[100005], ara3[100005];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
vector < vector <long long> > g(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    cin >> n;
    memset(ara, 0, sizeof ara);
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        ara[a]++;
        ara[b]++;
    }
    if(n==1){
        cout << "0.000000000";
        return 0;
    }
    for(i=1;i<=n;i++) ara2[i] = 9999999999.0;
    queue <long long> q;
    ara2[1] = 0.0;
    q.push(1);
    ara3[1] = 1.0;
    double dis, cit, pr;
    while(!q.empty()){
        a = q.front();
        q.pop();
        for(i=0;i<g[a].size();i++){
            if(ara2[a]+1.0<ara2[g[a][i]]){
                ara2[g[a][i]] = ara2[a]+1;
                q.push(g[a][i]);
                dis = (double)(ara[a]-1);
                if(a==1) dis+=1.0;
                ara3[g[a][i]] = (ara3[a])/(dis);
            }
        }
    }
    pr = cit = 0.0;
    for(i=2;i<=n;i++){
        if(ara[i]==1){
            pr += ara2[i]*ara3[i];
            cit += 1.0;
        }
    }
    printf("%.10lf", pr);
    return 0;
}













