#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//
vector < vector <long long> > graph(105);
stack <char> stk;
stack <char> stk2;
int vis[105], cycle;

void toposort(long long u){
    if(vis[u]==1){
        cycle = 0;
        return;
    }
    if(vis[u]==2) return;
    vis[u] = 1;
    for(int i=0;i<graph[u].size();i++){
        toposort(graph[u][i]);
    }
    stk.push((char)(u+'a'));
    vis[u] = 2;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> star[i];
    }
    for(i=0;i<n-1;i++){
        bool dep = false;
        for(j=0;j<min(star[i].length(),star[i+1].length());j++){
            if(star[i][j]!=star[i+1][j]){
                graph[star[i][j]-'a'].push_back(star[i+1][j]-'a');
                dep = true;
                break;
            }
        }
        if(star[i].length()>star[i+1].length()){
            if(dep==false){
                cout <<"Impossible";
                return 0;
            }
        }
    }
    cycle = 1;
    memset(vis, false, sizeof vis);
    for(i=25;i>=0;i--){
        if(!vis[i]){
            toposort(i);
        }
    }
    if(cycle==0) cout <<"Impossible";
    else {
        while(!stk.empty()){
            cout << stk.top();
            stk.pop();
        }
    }
    return 0;
}











