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

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> t;
    while(t--){
        cin >> n;
        vector < vector <long long> > graph(n+5);
        long long ara[n+5];
        for(i=1;i<=n;i++) ara[i] = 0;
        for(i=0;i<n-1;i++){
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
            ara[a]++;
            ara[b]++;
        }
        vector < vector <long long> > lev(n+5);
        c = 0;
        for(i=1;i<=n;i++){
            if(ara[i]==1) a = i;
            if(ara[i]==n-1){
                c = 1;
                break;
            }
        }
        if(c){
            cout << -1<<endl;
            continue;
        }
        queue <long long> q;
        q.push(a);
        for(i=1;i<=n;i++) ara[i] = 0;
        ara[a] = 1;
        while(!q.empty()){
            a = q.front();
            q.pop();
            for(i=0;i<graph[a].size();i++){
                b = graph[a][i];
                if(!ara[b]){
                    ara[b] = ara[a]+1;
                    q.push(b);
                }
            }
        }
        for(i=1;i<=n;i++){
            lev[ara[i]].push_back(i);
        }
        for(i=2;i<=n;i+=2){
            for(j=0;j<lev[i].size();j++){
                cout << lev[i][j] <<" ";
            }
        }
        for(i=1;i<=n;i+=2){
            for(j=0;j<lev[i].size();j++){
                cout << lev[i][j] <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}













