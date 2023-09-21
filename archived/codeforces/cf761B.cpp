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
long long ara[4005];
long long ara2[4005];
long long dp[4005];
long long dp2[4005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, L,k;
    cin >> n >> L;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=1;i<n;i++){
        x.push_back(ara[i]-ara[i-1]);
    }
    x.push_back(L-ara[n-1]+ara[0]);
    for(i=0;i<n;i++){
        cin >> ara2[i];
    }
    for(i=1;i<n;i++){
        y.push_back(ara2[i]-ara2[i-1]);
    }
    y.push_back(L-ara2[n-1]+ara2[0]);
    k = 0;
    bool flag = true;
    for(i=0;i<y.size();i++){
        if(x[0]==y[i]){
            k = i;
            flag = true;
            for(j=0;j<x.size();j++){
                if(x[j]!=y[k]){
                    flag = false;
                    break;
                }
                k++;
                if(k==n) k = 0;
            }
            if(flag){
                cout <<"YES";
                return 0;
            }
        }
    }
    cout <<"NO";
    return 0;
}















