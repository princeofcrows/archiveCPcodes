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

bool vis[205][205];

void dfs(int i, int j){
    if(vis[i][j]) return;
    if(star[i][j]=='0') return;
    vis[i][j] = true;
    if(i>0&&j>0){
        dfs(i-1, j-1);
    }
    if(i>0){
        dfs(i-1, j);
    }
    if(j>0){
        dfs(i, j-1);
    }
    if(i<n-1){
        dfs(i+1, j);
    }
    if(j<n-1){
        dfs(i, j+1);
    }
    if(i<n-1&&j<n-1){
        dfs(i+1, j+1);
    }
    if(i>0&&j<n-1){
        dfs(i-1, j+1);
    }
    if(i<n-1&&j>0){
        dfs(i+1, j-1);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    t = 1;
    while(cin>>n){
        for(i=0;i<n;i++){
            cin >> star[i];
        }
        memset(vis, false, sizeof vis);
        ans = 0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(vis[i][j]==false&&star[i][j]=='1'){
                    ans++;
                    //cout << i <<" "<<j<<endl;
                    dfs(i, j);
                }
            }
        }
        cout <<"Image number "<<t <<" contains "<< ans<<" war eagles."<<endl;
        t++;
    }
    return 0;
}















