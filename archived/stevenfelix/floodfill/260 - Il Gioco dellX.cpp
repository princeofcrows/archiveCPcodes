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

bool dfs(int i, int j){
    if(vis[i][j]) return false;
    if(star[i][j]=='w') return false;
    if(i==n-1&&star[i][j]=='b') return true;
    vis[i][j] = true;
    bool res1, res2, res3, res4, res5, res6;
    res1 = res2 = res3 = res4 = res5 = res6 = false;
    if(i>0&&j>0){
        res1 = dfs(i-1, j-1);
    }
    if(i>0){
        res2 = dfs(i-1, j);
    }
    if(j>0){
        res3 = dfs(i, j-1);
    }
    if(i<n-1){
        res4 = dfs(i+1, j);
    }
    if(j<n-1){
        res5 = dfs(i, j+1);
    }
    if(i<n-1&&j<n-1){
        res6 = dfs(i+1, j+1);
    }
    return res1||res2||res3||res4||res5||res6;
}

int main() {
    //freopen("in.txt", "r", stdin);
    int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    t = 1;
    bool flag;
    while(1){
        cin>>n;
        if(n==0) break;
        for(i=0;i<n;i++){
            cin >> star[i];
        }
        flag = false;
        memset(vis, false, sizeof vis);
        for(i=0;i<n;i++){
            if(star[0][i]=='b'){
                if(dfs(0, i)){
                    cout << t <<" B"<<endl;
                    flag = true;
                    break;
                }
            }
        }
        if(flag==false){
            cout << t <<" W"<<endl;
        }
        t++;
    }
    return 0;
}















