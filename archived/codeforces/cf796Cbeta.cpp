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
vector <long long> mnode;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    mx = -9999999999999999;
    for(i=1;i<=n;i++){
        cin >> ara[i];
        if(ara[i]>mx){
            mx = ara[i];
        }
    }
    for(i=1;i<=n;i++){
        if(ara[i]==mx){
            mnode.push_back(i);
        }
    }
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    a = 0;
    for(k=0;k<mnode.size();k++){
        ans = 0;
        for(i=0;i<graph[mnode[k]].size();i++){
            if(ara[graph[mnode[k]][i]]==mx&&graph[mnode[k]][i]!=mnode[k]) ans++;
            for(j=0;j<graph[graph[mnode[k]][i]].size();j++){
                if(ara[graph[graph[mnode[k]][i]][j]]==mx&&graph[graph[mnode[k]][i]][j]!=mnode[k])
                    ans++;
            }
        }
        a = max(ans, a);
    }
    cout << mx+a;
    return 0;
}




















