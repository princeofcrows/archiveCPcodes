#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;
vector < vector <long long> > x(105);
vector < vector <long long> > y(105);

bool emp[105], lang[105];
void dfs(long long u){
    if(emp[u]) return;
    emp[u] = true;
    for(int i=0; i<x[u].size(); i++){
        long long v = x[u][i];
        if(!lang[v]){
            lang[v] = true;
            for(int j=0; j<y[v].size(); j++){
                dfs(y[v][j]);
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, m, i, j, temp, temp2, ans;
    cin >> n >> m;
    bool flag = false;
    for(i=0;i<n;i++){
        cin >> temp;
        for(j=0; j<temp; j++){
            cin >> temp2;
            if(temp2) flag = true;
            y[temp2].push_back(i+1);
            x[i+1].push_back(temp2);
        }
    }
    memset(emp, false, sizeof emp);
    memset(lang, false, sizeof lang);
    ans = 0;
    for(i=1;i<=n;i++){
        if(!emp[i]){
            dfs(i);
            ans++;
        }
    }
    if(!flag) ans++;
    cout << ans-1;
    return 0;
}












