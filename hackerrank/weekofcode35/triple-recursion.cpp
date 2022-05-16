#include <bits/stdc++.h>
using namespace std;
string str, astr;
int ara[105][105];

int main(){
    int n, a4, a7, i, j, t, mn, num, m, k;
    cin >> n >> m >> k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0&&j==0) ara[i][j] = m;
            else if(i==j) ara[i][j] = ara[i-1][j-1] + k;
            else if(i>j) ara[i][j] = ara[i-1][j] - 1;
            else if(i<j) ara[i][j] = ara[i][j-1] - 1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << ara[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}
