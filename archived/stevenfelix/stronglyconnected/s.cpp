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
long long ara[2005], ara2[2005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat2;
map <string, long long> dat;
vector <vector <long long> > graph(2005);
vector <vector <long long> > rgraph(2005);
stack <long long> stk;

void toposort(long long u){
    ara[u] = 1;
    for(long long i=0;i<graph[u].size();i++){
        if(ara[graph[u][i]]==0) toposort(graph[u][i]);
    }
    ara[u] = 2;
    stk.push(u);
}

void dfs(long long u){
    ara2[u] = 1;
    for(long long i=0;i<rgraph[u].size();i++){
        if(ara2[rgraph[u][i]]==0) dfs(rgraph[u][i]);
    }
    ara2[u] = 2;
    x.push_back(u);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, n;
    t = 1;
    while(cin >> n >> l){
        if(n==0&&l==0) break;
        if(t!=1) cout << endl;
        h = 1;
        dat.clear();
        dat2.clear();
        while(l--){
            cin >> str >> str1;
            if(dat[str]==0){
                dat[str] = h++;
                dat2.push_back(str);
            }
            if(dat[str1]==0){
                dat[str1] = h++;
                dat2.push_back(str1);
            }
            a = dat[str];
            b = dat[str1];
            graph[a].push_back(b);
            rgraph[b].push_back(a);
        }
        memset(ara, 0, sizeof ara);
        memset(ara2, 0, sizeof ara2);
        for(i=1;i<=n;i++){
            if(ara[i]==0) toposort(i);
        }
        ans = 0;
        cout <<"Calling circles for data set "<<t++<<":\n";
        while(!stk.empty()){
            if(ara2[stk.top()]==0){
                x.clear();
                dfs(stk.top());
                ans++;
                for(i=0;i<x.size();i++){
                    cout << dat2[x[i]-1];
                    if(i!=x.size()-1) cout <<", ";
                }
                cout << endl;
            }
            stk.pop();
        }
        for(i=0;i<=n;i++){
            graph[i].clear();
            rgraph[i].clear();
        }
        dat.clear();
        dat2.clear();
    }
    return 0;
}







