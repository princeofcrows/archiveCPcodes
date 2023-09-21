#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

int arsz, n;
vector <int> ara;
string star[205];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <int> > graph(10005);
vector < pair <int, int> > critical;
int dfs_low[10005], dfs_num[10005], dfs_cnt, dfs_parent[10005], root, child, art_ver[10005];

void bridges(int u){
    dfs_low[u] = dfs_num[u] = dfs_cnt++;
    for(int i=0;i<graph[u].size();i++){
        if(dfs_num[graph[u][i]]==0){
            dfs_parent[graph[u][i]] = u;
            bridges(graph[u][i]);
            if(dfs_low[graph[u][i]]>dfs_num[u]){
                critical.push_back({min(u, graph[u][i]),max(u, graph[u][i])});
            }
            dfs_low[u] = min(dfs_low[u], dfs_low[graph[u][i]]);
        }
        else if(dfs_parent[u]!=graph[u][i]){
            dfs_low[u] = min(dfs_low[u], dfs_num[graph[u][i]]);
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    t = 1;
    bool flag;
    while(cin >> n){
        for(j=0;j<n;j++){
            cin >> a;
            cin >> str;
            m = 0;
            for(i=1;str[i]!=')';i++){
                m = m*10 + (str[i]-'0');
            }
            for(i=0;i<m;i++){
                cin >> b;
                graph[a].push_back(b);
            }
        }
        memset(dfs_num, 0, sizeof dfs_num);
        dfs_cnt = 1;
        for(i=0;i<n;i++){
            if(dfs_num[i]==0){
                bridges(i);
            }
        }
        cout << critical.size() <<" critical links"<< endl;
        sort(critical.begin(), critical.end());
        for(i=0;i<critical.size();i++){
            cout << critical[i].first<<" - "<<critical[i].second<<endl;
        }
        cout << endl;
        critical.clear();
        for(i=0;i<=n;i++){
            graph[i].clear();
        }
    }
    return 0;
}















