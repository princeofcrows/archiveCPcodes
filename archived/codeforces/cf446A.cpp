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
long long forw[100005], backw[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, diglen, i, mx, cnt, bef, p1;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
    }
    forw[0] = 1;
    mx = 1;
    for(i=1;i<n;i++){
        if(x[i]>x[i-1]){
            forw[i] = forw[i-1]+1;
        }
        else forw[i] = 1;
        mx = max(mx, forw[i]+1);
    }
    backw[n-1] = 1;
    for(i=n-2;i>=0;i--){
        if(x[i]<x[i+1]){
            backw[i] = backw[i+1]+1;
            mx = max(mx, backw[i]+1);
        }
        else backw[i] = 1;
    }
    for(i=1;i<n-1;i++){
        if(x[i-1]+1<x[i+1]){
            mx = max(backw[i+1]+forw[i-1]+1, mx);
        }
    }
    if(mx>n) mx = n;
    cout << mx;
    return 0;
}












