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

vector < vector <int> > graph(1005);
vector < vector <int> > resgraph(1005);
int dfs_low[1005], dfs_num[1005], dfs_cnt, dfs_parent[1005], root, child, art_ver[1005];

void bridges(int u){
    dfs_low[u] = dfs_num[u] = dfs_cnt++;
    for(int i=0;i<graph[u].size();i++){
        if(dfs_num[graph[u][i]]==0){
            dfs_parent[graph[u][i]] = u;
            bridges(graph[u][i]);
            cout << u << " " << graph[u][i]<<endl;
            if(dfs_low[graph[u][i]]>dfs_num[u]){
                cout << graph[u][i] << " "<< u <<endl;
            }
            dfs_low[u] = min(dfs_low[u], dfs_low[graph[u][i]]);
        }
        else if(dfs_parent[u]!=graph[u][i]){
            dfs_low[u] = min(dfs_low[u], dfs_num[graph[u][i]]);
            cout << u << " " << graph[u][i]<<endl;
        }
    }
}

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    t = 1;
    bool flag;
    while(cin >> n >> m){
        if(n==0&&m==0) break;
        cout << t++<<endl<<endl;
        for(i=0;i<m;i++){
            cin >> a >> b;
            //cout << min(a,b) <<" "<< max(a,b) <<endl;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        memset(dfs_num, 0, sizeof dfs_num);
        dfs_cnt = 1;
        for(i=1;i<=n;i++){
            if(dfs_num[i]==0){
                bridges(i);
                //cout << i;
            }
        }
        //cout << endl;
        cout << "#" <<endl;
        for(i=0;i<=n;i++){
            graph[i].clear();
        }
    }
    return 0;
}















