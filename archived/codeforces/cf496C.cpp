#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < pair <string, string> > x;
vector <string> a1;
vector <string> a2;
string str1[105];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans, temp2, m, j;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> str1[i];
    }
    ans = 0;
    bool dat[n];
    memset(dat, false, sizeof dat);
    for(i=0;i<m;i++){
        bool flag = true;
        for(j=0;j<n-1;j++){
            if(!dat[j]){
                if(str1[j][i]>str1[j+1][i]){
                    ans++;
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            for(j=0;j<n-1;j++){
                if(!dat[j]){
                    if(str1[j][i]<str1[j+1][i]){
                        dat[j] = true;
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}
