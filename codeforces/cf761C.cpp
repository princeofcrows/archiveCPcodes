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
vector <long long> x;
vector <long long> y;
long long ara[3];
long long ara2[4005];
long long dp[4005];
long long dp2[4005];
char arac[500][500];
vector < pair <long long,long long> > xy(3);
int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, L,k;
    cin >> n >> m;
    bool flag[3];
    memset(flag, false, sizeof flag);
    for(i=0;i<n;i++){
        cin >> arac[i];
        for(j=0; j<m; j++){
            if(arac[i][j]>='a'&&arac[i][j]<='z'){
                if(abs(j-m)<ara[0]||abs(j)<ara[0]){
                    ara[0] = min(abs(j-m), j);
                    xy[0].first = i;
                    xy[0].second= j;
                }
            }
            if(arac[i][0]>='0'&&arac[i][0]<='9'){
                if(abs(j-m)<ara[0]||abs(j)<ara[0]){
                    ara[1] = min(abs(j-m), j);
                    xy[1].first = i;
                    xy[1].second= j;
                }
            }
            if(arac[i][0]=='#'||arac[i][0]=='&'||arac[i][0]=='*'){

            } flag[2] = true;
        }
    }
    ans = 0;
    for(i=0;i<3;i++){
        if(!flag[i]){

        }
    }
    return 0;
}















