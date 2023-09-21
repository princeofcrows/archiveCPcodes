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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
vector <vector <long long> > graph(105);
long long dp[105][105], m_f, f, s, t;
map <long long, long long> p;

void augmentpath(long long u, long long minflow){
    if(u==s){
        f = minflow;
        return;
    }
    else if(p.count(u)){
        augmentpath(p[u], min(dp[p[u]][u], minflow));
        dp[p[u]][u] -= f;
        dp[u][p[u]] += f;
    }
}

void edmondkarp(){
    m_f = 0;
    while(1){
        f = 0;
        queue <long long> q;
        map <long long, long long> dist;
        q.push(s);
        dist[s] = 0;
        while(!q.empty()){
            long long u = q.front();
            q.pop();
            if(u==t) break;
            for(long long i=0;i<graph[u].size();i++){
                long long v = graph[u][i];
                if((dp[u][v]>0)&&(!dist.count(v))){
                    dist[v] = dist[u]+1;
                    q.push(v);
                    p[v] = u;
                }
            }
        }
        augmentpath(t, 99999999);
        if(f==0) break;
        m_f+=f;
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, j, i, m, h, h2, m2, c, a, b, mx, k, l;
    l = 1;
    while(cin >> n){
        if(!n) break;
        cin >> s >> t >> m;
        p.clear();
        memset(dp, 0, sizeof dp);
        vector <vector <long long> > tgraph(105);
        swap(tgraph, graph);

        for(i=0;i<m;i++){
            cin >> a >> b >> c;
            graph[a].push_back(b);
            graph[b].push_back(a);
            dp[a][b] += c;
            dp[b][a] += c;
        }
        edmondkarp();
        printf("Network %lld\nThe bandwidth is %lld.\n\n", l++, m_f);
    }
    return 0;
}







