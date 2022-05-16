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
long long ara[205], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
vector <vector <long long> > graph(205);


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, n;
    while(cin >> n){
        if(!n) break;
        cin >> l;
        while(l--){
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        memset(ara, -1, sizeof ara);
        queue <long long> q;
        q.push(0);
        c = 1;
        ara[0] = 0;
        while(!q.empty()){
            a = q.front();
            q.pop();
            for(i=0;i<graph[a].size();i++){
                if(ara[graph[a][i]]==-1){
                    ara[graph[a][i]] = ara[a]^1;
                    q.push(graph[a][i]);
                }
                else if(ara[a]==ara[graph[a][i]]){
                    c = 0;
                    break;
                }
            }
            if(c==0) break;
        }
        if(c) cout << "BICOLORABLE.\n";
        else cout << "NOT BICOLORABLE.\n";
        for(i=0;i<=n;i++){
            graph[i].clear();
        }

    }
    return 0;
}







