//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[300005], ara2[300005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//
priority_queue <pair <long long, long> > q;
pair <long long, long long> top;
vector < vector <long long> > graph(300005);

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    mx = -9999999999999999;
    for(i=1;i<=n;i++){
        cin >> ara[i];
        if(ara[i]>mx){
            mx = ara[i];
            t = i;
        }
    }
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    memset(ara2, false, sizeof ara2);
    q.push({mx, t});
    while(!q.empty()){
        top = q.top();
        q.pop();
        mx = max(mx,top.first);
        ara2[top.second] = true;
        for(i=0;i<graph[top.second].size();i++){
            ara[graph[top.second][i]]++;
            for(j=0;j<graph[graph[top.second][i]].size();j++){
                if(!ara2[graph[graph[top.second][i]][j]]){
                    ara[graph[graph[top.second][i]][j]]++;
                }
            }
            if(ara2[graph[top.second][i]]==false) q.push({ara[graph[top.second][i]], graph[top.second][i]});
        }
    }
    cout << mx;
    return 0;
}




















