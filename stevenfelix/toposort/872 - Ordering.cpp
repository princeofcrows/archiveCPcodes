#include <bits/stdc++.h>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

vector <string> star;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

long long ara[10005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//


map <char, long long> dat;
map <long long, char> dat2;
vector < vector <long long> > graph(300);
int cycle;
stack <long long> stk;
map <string,long long> res;
vector <string> lex;
long long indegree[105], c;

void alltoposort(bool vis[], string ts){
    bool flag = false;
    for(long long i=1;i<c;i++){
        if(indegree[i]==0&&!vis[i]){
            for(long long j=0;j<graph[i].size();j++){
                indegree[graph[i][j]]--;
            }
            ts+=dat2[i];
            vis[i]= true;
            alltoposort(vis, ts);
            vis[i]= false;
            ts.erase(ts.end() - 1);
            for(long long j=0;j<graph[i].size();j++){
                indegree[graph[i][j]]++;
            }
            flag = true;
        }
    }
    if(!flag){
        if(res[ts]==0){
            res[ts] = 1;
            lex.push_back(ts);
        }
    }
}

void toposort(int u){
    if(ara[u]){
        if(ara[u]==1) cycle = 1;
        return;
    }
    ara[u] = 1;
    for(int i=0;i<graph[u].size();i++){
        toposort(graph[u][i]);
    }
    ara[u] = 2;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, a, b, mx, k, n, m;
    cin >> t;
    getchar();
    while(t--){
        getchar();
        getline(cin, str);
        //cout << str <<endl;
        c = 1;
        dat.clear();
        dat2.clear();
        for(i=0;i<str.length();i++){
            if(str[i]==' ') continue;
            dat[str[i]] = c;
            dat2[c] = str[i];
            c++;
        }

        getline(cin, str);
        vector < vector <long long> > tgraph(300);
        swap(tgraph, graph);
        memset(indegree, 0, sizeof indegree);

        for(i=0;i<str.length();i++){
            if(str[i]==' ') continue;
            graph[dat[str[i]]].push_back(dat[str[i+2]]);
            indegree[dat[str[i+2]]]++;
            i+=2;
        }
        memset(ara, 0, sizeof ara);
        cycle = 0;
        for(i=1;i<c;i++){
            toposort(i);
        }
        if(cycle){
            cout << "NO" << endl;
            if(t>0) cout << endl;
            continue;
        }
        res.clear();
        lex.clear();
        bool vis[1005];
        memset(vis, false, sizeof vis);
        string ts="";
        alltoposort(vis, ts);
        sort(lex.begin(), lex.end());
        for(i=0;i<lex.size();i++){
            for(j=0;j<lex[i].length();j++){
                cout << lex[i][j];
                if(j!=lex[i].length()-1) cout <<" ";
            }
            cout << endl;
        }
        if(t>0)cout << endl;
    }
    return 0;
}















