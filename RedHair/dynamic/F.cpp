#include <bits/stdc++.h>
using namespace std;
#define int long long
string str1, str2;
vector <int> g[300005];
vector <int> rg[300005];
vector < pair <pair <int, int>, int> > ab;
string star[300005];
map <string, int> dat;
int ara[300005], aral[300005], amr[300005], aml[300005], ml, mr;
int vis[300005], vis2[300005];

void dfs(int u){
    //cout << u << " ";
    if(vis[u]){
        return;
    }
    vis[u] = 1;
    if(mr>ara[u]){
        mr = ara[u];
        ml = aral[u];
    }
    if(mr==ara[u]&&aral[u]<ml){
        mr = ara[u];
        ml = aral[u];
    }
    amr[u] = mr;
    aml[u] = ml;
    for(int i=0;i<g[u].size();i++){
        dfs(g[u][i]);
    }
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n, m, a, b ;
    cin >> m;
    b = 1;
    for(i=0;i<m;i++){
        cin >> star[i];
        a = 0;
        for(j=0;j<star[i].length();j++){
            star[i][j] = toupper(star[i][j]);
            if(star[i][j]=='R') a++;
        }
        if(!dat[star[i]]) dat[star[i]] = b++;
        ara[dat[star[i]]] = a;
        aral[dat[star[i]]] = star[i].length();
        //cout << star[i] << endl;
    }
    cin >> n;
    for(i=0;i<n;i++){
        cin >> str1 >> str2;
        a = 0;
        for(j=0;j<str1.length();j++){
            str1[j] = toupper(str1[j]);
            if(str1[j]=='R') a++;
        }
        if(!dat[str1]) dat[str1] = b++;
        ara[dat[str1]] = a;
        aral[dat[str1]] = str1.length();
        a = 0;
        for(j=0;j<str2.length();j++){
            str2[j] = toupper(str2[j]);
            if(str2[j]=='R') a++;
        }
        if(!dat[str2]) dat[str2] = b++;
        ara[dat[str2]] = a;
        aral[dat[str2]] = str2.length();
        g[dat[str2]].push_back(dat[str1]);
        //rg[dat[str2]].push_back(dat[str1]);
    }
    memset(vis, 0, sizeof vis);
    for(i=1;i<b;i++){
        aml[i] = aral[i];
        amr[i] = ara[i];
        ab.push_back({{ara[i], aral[i]}, i});
    }
    sort(ab.begin(), ab.end());
    for(i=1;i<b;i++){
        mr = 999999999;
        ml = 999999999;
        dfs(ab[i-1].second);
    }
    a = b = 0;
    /*for(i=1;i<c;i++){
       cout << amr[i] << " " << aml[i] << " \n";
    }*/
    for(i=0;i<m;i++){
        a+=amr[dat[star[i]]];
        b+=aml[dat[star[i]]];
    }
    cout << a << " " << b;
    return 0;
}









