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
char str[505][505];
bool flag[505][505];
long long n, m, area;

void printgr(){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]=='.'&&flag[i][j]==false){
                cout << 'X';
            }
            else{
                cout << str[i][j];
            }
        }
        cout << endl;
    }
    return ;
}

void dfs(long long i, long long j){
    if(area==0) return;
    if(i<0||j<0||i>=n||j>=m) return;
    if(flag[i][j]) return;
    if(str[i][j]!='.') return;
    flag[i][j] = true;
    area--;
    if(area==0) {
        printgr();
        return;
    }
    dfs(i+1, j);
    dfs(i, j+1);
    dfs(i-1, j);
    dfs(i, j-1);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, diglen, i, j, k, dot;
    cin >> n >> m >> k;
    for(i=0;i<n;i++){
        cin >> str[i];
    }
    dot = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]=='.'){
                dot++;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]=='.'){
                memset(flag, false, sizeof flag);
                area = dot-k;
                dfs(i, j);
                if(area==0){
                    return 0;
                }
            }
        }
    }
    return 0;
}












