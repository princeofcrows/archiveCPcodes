#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

int arsz;
vector <int> ara;
vector <string> star;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//


map <char, long long> dat;
map <long long, char> dat2;
vector < vector <long long> > graph(300);
bool vis[300];
stack <long long> stk;

void toposort(int u){
    if(vis[u]) return;
    vis[u] = true;
    for(int i=0;i<graph[u].size();i++){
        toposort(graph[u][i]);
    }
    stk.push(u);
}


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, n, m;
    while(cin >> n >> m){
        if(n==0&&m==0) break;
        for(i=0;i<=n;i++){
            graph[i].clear();
        }
        for(i=0;i<m;i++){
            cin >> a >> b;
            graph[a].push_back(b);
        }
        memset(vis, false, sizeof vis);
        for(i=1;i<=n;i++){
            toposort(i);
        }
        while(!stk.empty()){
            cout << stk.top();
            stk.pop();
            if(!stk.empty()) cout << " ";
        }
        cout << endl;
    }
    return 0;
}















