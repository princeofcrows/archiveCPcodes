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
    cin >> t;
    while(t--){
        cin >> n >> l;
        while(l--){
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        memset(ara, -1, sizeof ara);
        queue <long long> q;
        c = 1;
        ans = 0;
        for(j=0;j<n;j++){
            if(ara[j]==-1){
                q.push(j);
                ara[j] = 0;
                d = b = 0;
                b = 1;
                while(!q.empty()){
                    a = q.front();
                    q.pop();
                    for(i=0;i<graph[a].size();i++){
                        if(ara[graph[a][i]]==-1){
                            ara[graph[a][i]] = ara[a]^1;
                            q.push(graph[a][i]);
                            if(ara[graph[a][i]]==0) b++;
                            else d++;
                        }
                        else if(ara[a]==ara[graph[a][i]]){
                            c = 0;
                            break;
                        }
                    }
                    if(c==0) break;
                }
                if(c==0) break;
                if(d==0) d = b;
                ans+=min(d, b);
            }
            if(c==0) break;
        }
        if(c==0) cout << "-1\n";
        else cout << ans <<"\n";
        for(i=0;i<=n;i++){
            graph[i].clear();
        }

    }
    return 0;
}







