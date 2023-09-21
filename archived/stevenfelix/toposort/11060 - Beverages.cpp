#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

int arsz;
vector <string> star;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//


map <string, long long> dat;
map <long long, char> dat2;
vector < vector <long long> > graph(300);
bool vis[300];
stack <long long> stk;
long long ara[303];

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
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, n, m, d;
    d = 1;
    while(cin >> n){
        c = 0;
        dat.clear();
        star.clear();
        for(i=0;i<n;i++){
            cin >> str;
            dat[str] = c++;
            star.push_back(str);
        }
        for(i=0;i<=n;i++){
            graph[i].clear();
        }
        cin >> m;
        memset(ara, 0, sizeof ara);
        for(i=0;i<m;i++){
            cin >> str >> str1;
            graph[dat[str]].push_back(dat[str1]);
            ara[dat[str1]]++;
        }
        priority_queue<int, vector<int>, greater<int> > q;
        for(i=0;i<n;i++){
            if(ara[i]==0) q.push(i);
        }
        while(!q.empty()){
            a = q.top();
            x.push_back(a);
            q.pop();
            for(i=0;i<graph[a].size();i++){
                ara[graph[a][i]]--;
                if(ara[graph[a][i]]==0) q.push(graph[a][i]);
            }
        }
        cout <<"Case #"<<d++<<": Dilbert should drink beverages in this order: ";
        for(i=0;i<x.size();i++){
            cout << star[x[i]];
            if(i!=x.size()-1) cout <<" ";
        }
        cout << "." <<endl<<endl;
        x.clear();
    }
    return 0;
}















