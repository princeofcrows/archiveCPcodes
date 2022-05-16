#include <bits/stdc++.h>

using namespace std;
vector < vector <int> > graph(1005);
vector < vector <int> > revgraph(1005);
bool vis[1005];
stack <int> stk;
vector < vector <int> > res(1005);
int ans, c;
string str, str1, str2;
map <char, int> dat;
map <int, char> dat2;
vector <string> resstr;

void toposort(int u){
    if(vis[u]) return;
    vis[u] = true;
    for(int i=0;i<graph[u].size();i++){
        toposort(graph[u][i]);
    }
    stk.push(u);
}
void toposort2(int u){
    if(vis[u]) return;
    vis[u] = true;
    str1+=dat2[u];
    for(int i=0;i<revgraph[u].size();i++){
        toposort2(revgraph[u][i]);
    }
}
int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int i, j, n, k, l, m, t, a, b;
    bool flag = false;
    while(cin >> n){
        if(n==0) break;
        if(flag==true) cout << endl;
        flag = true;

        getchar();
        c = 1;
        //cout << n;
        for(i=0;i<n;i++){
            getline(cin, str);
            //cout << str << endl;
            a = str.length();
            if(dat[str[a-1]]==0){
                dat[str[a-1]] = c;
                dat2[c] = str[a-1];
                c++;
            }
            b = dat[str[a-1]];
            for(j=0;j<a-2;j+=2){
                if(str[a-1]==str[j]) continue;
                if(dat[str[j]]==0){
                    dat[str[j]] = c;
                    dat2[c] = str[j];
                    c++;
                    //cout << c ;
                }
                graph[b].push_back(dat[str[j]]);
                revgraph[dat[str[j]]].push_back(b);
            }
        }
        memset(vis, false, sizeof vis);
        for(i=1;i<c;i++){
            if(vis[i]==false){
                toposort(i);
            }
        }
        ans = 0;
        memset(vis, false, sizeof vis);
        while(!stk.empty()){
            j = stk.top();
            stk.pop();
            if(vis[j]==false){
                str1.clear();
                toposort2(j);
                ans++;
                resstr.push_back(str1);
            }
        }
        for(i=0;i<ans;i++){
            sort(resstr[i].begin(), resstr[i].end());
        }
        sort(resstr.begin(), resstr.end());
        for(i=0;i<ans;i++){
            for(j=0;j<resstr[i].length();j++){
                cout << resstr[i][j];
                if(j!=resstr[i].length()-1) cout<<" ";
            }
            cout << endl;
        }
        dat.clear();
        dat2.clear();
        res.clear();
        resstr.clear();
        str.clear();
        for(i=0;i<c;i++){
            graph[i].clear();
            revgraph[i].clear();
        }
        for(i=0;i<ans;i++){
            res[i].clear();
        }
    }
    return 0;
}


