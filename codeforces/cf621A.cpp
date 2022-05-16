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
vector <pair <long long, long long> > v;
vector <long long> x;
vector <long long> y;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b;
    cin >> n;
    ans = 0;
    m = 999999999999999;
    for(i=0; i<n; i++){
        cin >> temp;
        x.push_back(temp);
        ans+=temp;
        if(temp%2&&temp<m){
            m = temp;
        }
    }
    sort(x.begin(), x.end());
    if(ans%2){
        ans-=m;
    }
    cout << ans;
    return 0;
}















